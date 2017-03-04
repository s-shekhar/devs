import os
from os import path


filename = "/my/directory/filename.txt"
dir = os.path.dirname(filename)

if not os.path.exists("Hello"):
    os.makedirs("Hello")


dirToScan = "/Hello"
files = [f for f in os.listdir(dirToScan) if path.isfile(f)]


for filename in files:
    os.makedirs(filename)
