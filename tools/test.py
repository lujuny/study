import re
import os 
import sys
#open file
ifile = open("../catalog.md", mode="r")
lines = ifile.readlines()
ifile.close()


ofile = open("../catalog.md", mode="w")

for line in lines :
    newline = line.replace("`", "\\`")
    print(newline)
    ofile.write(newline)
ofile.close()

