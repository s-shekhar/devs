target = open("filename.txt", 'w')

print "Truncating the file.  Goodbye!"
target.truncate()

print "I'm going to write these to the file."

for i in range(100,999):
   
     fullfilename = '14BCE0%d'%(i,)

     target.write(fullfilename)
     target.write("\n")

print "And finally, we close it."
target.close()
