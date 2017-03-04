import urllib


for j in range(30,60):
    for i in range(1,12):
        filename = r"http://www.jjgirls.com/japanese/julia/%d/julia-%d.jpg"%(j,i)
        counter = "%d.jpg"%(i,)
        
        fullfilename = '%d-Julia %d.jpg'%(j,i)

        urllib.urlretrieve(filename , fullfilename)
