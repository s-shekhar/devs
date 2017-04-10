import requests,sys,urllib2,math,os
from bs4 import BeautifulSoup



def convert_size(size_bytes):
   if (size_bytes == 0):
       return '0B'
   size_name = ("B", "KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB")
   i = int(math.floor(math.log(size_bytes, 1024)))
   p = math.pow(1024, i)
   s = round(size_bytes/p, 2)
   return '%s %s' % (s, size_name[i])


def dload(name , url):
    file_name = name+" [SSdloader].mp3"
    file_name = file_name.encode('utf-8')
    u = urllib2.urlopen(url)
    f = open(file_name, 'wb')
    meta = u.info()
    file_size = int(meta.getheaders("Content-Length")[0])
    mbsize = convert_size(file_size)
    print file_size
    print("Downloading: {0} Size: {1}".format(file_name, mbsize))

    file_size_dl = 0
    block_sz = 8192
    while True:
        buffer = u.read(block_sz)
        if not buffer:
            break

        file_size_dl += len(buffer)
        f.write(buffer)
        p = float(file_size_dl) / file_size
        status = r"{0}  [{1:.2%}]".format(file_size_dl, p)
        status = status + chr(8)*(len(status)+1)
        sys.stdout.write(status)

    f.close()

if(len(sys.argv)>1):
    path = sys.argv[1]
    print "You selected the file: " + path
else:
    print "Enter the filename as Argument"
    sys.exit()

with open(path,"rw+") as f:
    content = f.read().splitlines()

for argv in content:
    song = argv.replace(' ','+')
    target = "https://emusic.me/?string="+song

    print("Searching for the song "+song)
    r  = requests.get(target)
    data = r.text
    soup = BeautifulSoup(data,"html.parser")
    for n in soup.find_all('li'):
        if(n.get('data-mp3')!=None):
            url="https://download.listenod.ru/download/ok/?code="+n.get('data-mp3')[12:-4]
            print("URL :"+url)
            fname = n.find('em').text
            aname = n.find('b').text
    	    filename = aname + "-" + fname
    	    print filename
            dload(filename,url)
            break;
