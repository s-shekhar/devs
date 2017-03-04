import urllib

for i in range(36,40):
     filename = r"http://www.careerride.com/question-%d-Networking"%(i,)
     
     fullfilename = '%.2d.html'%(i,)

     print fullfilename
     
     urllib.urlretrieve(filename , fullfilename)


#http://billgatesbook.ru/ 11 and 19
