import os
import sys
import re

def modify(filename):
    file = open(
        file=filename, 
        mode="rw"
        )
    lines = file.readlines()
    for line in lines:
        line.replace('`', '\`')
    
    file.close()

if __name__ == "__main__":
    filenames = sys.argv
    for filename in filenames:
        modify(filename=filename)
    
        
    