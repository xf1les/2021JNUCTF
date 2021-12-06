import zipfile
import os


for i in reversed(range(0,5000)):
    print(i)
    zipFile = zipfile.ZipFile('flag'+str(i)+'.zip')
    for file in zipFile.namelist():
        zipFile.extract(file, '.')
    zipFile.close()
    os.remove('flag'+str(i)+'.zip')


