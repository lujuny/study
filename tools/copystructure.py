#copy folder structure

import shutil
import os

def ignore_file(dir, files):
    return [f for f in files if os.path.isfile(os.path.join(dir, f))]
path = str(os.path.abspath(".."))
shutil.copytree(
    
    "/g/AAMyWorkSpace/Github_Repos/Acwing",
    path,
    ignore=ignore_file
    

)
    