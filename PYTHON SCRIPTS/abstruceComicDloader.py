import requests,sys,urllib2,math
from bs4 import BeautifulSoup




for i in range(1,500):
    target = r"http://abstrusegoose.com/%d"%(i,)
    print target
    r  = requests.get(target)
    data = r.text
    soup = BeautifulSoup(data,"html.parser")
    for t in soup.select('img[src*=strips]'):
        url = t.get('src')
        print url

        """response = urllib2.urlopen(url)
        html = response.read()
        print html"""
        filename = url[32:]
        print filename
        f = open(filename, 'wb')
        f.write(requests.get(url).content)
        f.close()
