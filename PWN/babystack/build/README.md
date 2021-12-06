# pwn_docker (chroot)

## 1. Build

1. Copy your pwnable program to `bin/`.

2. `flag`: Place the flag string there.

3. `docker-compose.yml`: Replace `xxxx` with the challenge name.

4. `etc/start.sh`: Replace `xxxx` with the program name.

5. (Optional) `Dockerfile`: Edit `FROM ubuntu:20.04` line to use your preferred Ubuntu version.

6. Run `docker-compose build` to build docker image.

Note: Root privilege may be required.

## 2. Run & Stop

1. Run `docker-compose up -d` to start a docker container.

2. Use `nc 127.0.0.1 8888` to get access to your pwnable program.

3. Run `docker-compose down` to stop and destory the docker container.
