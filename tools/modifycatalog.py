import os
import sys
import re

def modify(filename):
    infile = open(
        file=filename, 
        mode="r"
        )
    lines = infile.readlines()
    infile.close()
    outfile = open(filename, "w")
    
    for line in lines:
        newline = line.replace('`', '\\`')
        outfile.write(newline)
        
    outfile.close()

if __name__ == "__main__":
    filenames = sys.argv[1:]
    print(filenames)
    # pass
    for filename in filenames:
        modify(filename=filename)
    
        
    