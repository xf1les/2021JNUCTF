首先使用`combine.py`将`result`文件中的图片进行拼接,拼接成一张`1920*1080`的图片,并保存与`image`文件夹中(当然你也可以使用`montage`进行拼接)

构建[gaps](https://github.com/nemanja-m/gaps)镜像,需要对`requirements.txt`进行一定的修改

`docker build -t gaps:latest .`

使用`gaps:latest`进行拼图

`docker run -ti -v $PWD/image:/image gaps:latest gaps --image=/image/puzzle.jpg --size=60 --generations=50 --population=200 --save`

待拼图的图片和拼图结果都位于`image`中

`flag{Fa73-Grand-Ord3r!!}`