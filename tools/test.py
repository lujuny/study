import re
import os 
import sys
#open file
path = ".."
for root, d_path, f_path in os.walk(path):
    print(f"{root}===={d_path}\n")

