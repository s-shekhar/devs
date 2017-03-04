import urllib

for i in range(01,22):
     filename = r"http://y2.pichunter.com/3493819_%d_o.jpg"%(i,)
     
     fullfilename = '%.2d.jpg'%(i,)

     print fullfilename
     
     urllib.urlretrieve(filename , fullfilename)


#http://billgatesbook.ru/ 11 and 19
