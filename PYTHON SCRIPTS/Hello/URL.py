import urllib
import os


for j in range(30,60):
    for i in range(1,12):
        filename = r"http://www.jjgirls.com/japanese/julia/%d/julia-%d.jpg"%(j,i)
        counter = "%d.jpg"%(i,)
        
        myPath = 'F:\DEVELOPMENT\%d'%j
        fullfilename = os.path.join(myPath,counter)

        urllib.urlretrieve(filename , fullfilename)
