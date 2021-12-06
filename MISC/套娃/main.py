import zipfile
import os

for i in range(1,5000):
    print(i)
    zipFile = zipfile.ZipFile(r'flag'+str(i)+'.zip', 'w')
    if i == 1:
        zipFile.write(r'flag.zip', 'flag'+str(i-1)+'.zip', zipfile.ZIP_DEFLATED)
    else:
        zipFile.write(r'flag'+str(i-1)+'.zip', 'flag'+str(i-1)+'.zip', zipfile.ZIP_DEFLATED)
        # zipFile.close()
        os.remove('flag' + str(i - 1) + '.zip')

# for i in reversed(range(1,3)):
#     print(i)
#     zipFile = zipfile.ZipFile('flag'+str(i)+'.zip')
#     for file in zipFile.namelist():
#         zipFile.extract(file, '.')
#     zipFile.close()
#     os.remove('flag'+str(i)+'.zip')


