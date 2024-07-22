#!/bin/bash

docker pull nginx
docker run -d -p 81:81 --name server nginx
docker cp ./server.c server:etc/nginx/
docker cp ./nginx.conf server:/etc/nginx/
docker exec server apt-get update
docker exec server apt-get install -y gcc spawn-fcgi libfcgi-dev
docker exec server gcc /etc/nginx/server.c -o /etc/nginx/webserver -l fcgi
docker exec server spawn-fcgi -p 8080 /etc/nginx/webserver
docker exec server nginx -s reload

