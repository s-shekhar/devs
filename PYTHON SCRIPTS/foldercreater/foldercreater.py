import os
from os import path


files = [f for f in os.listdir('.') if path.isfile(f)]
i = 0

for filename in files:
    print filename
    if not os.path.exists(filename):
        os.makedirs(filename)
    
