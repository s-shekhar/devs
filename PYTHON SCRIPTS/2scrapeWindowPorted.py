import requests,sys,urllib2,math
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

argv = raw_input("GIGABYTE DOWNLOADER\nAuthor: Shashank Shekhar\nEnter the Song name followed by the artist Ex: Hello Adele\n")

song = argv.replace(' ','+')

"""
argv=sys.argv
for i in argv[1:]:
    if ' ' in i:
        argv[argv.index(i)] = '"%s"' % i
song = '+'.join(argv[1:])
"""
target = "https://musico.su/?string="+song

print("Searching for the song "+song)
r  = requests.get(target)
data = r.text
soup = BeautifulSoup(data,"html.parser")
for n in soup.find_all('li'):
    if(n.get('data-mp3')!=None):
        url="http://musico.su/get/?code="+n.get('data-mp3')[12:-4]
        print("URL Hidden, Contact Shashank")
        fname = n.find('em').text
        print fname;
        n = raw_input("Download Y/N? Enter Y or N and press Enter ")
        if(n=='y' or n=='Y'):
            dload(fname,url)
