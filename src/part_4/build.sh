#!/bin/bash

docker build -t img .
docker run -d -p 80:81 --name server img
curl localhost:80
curl localhost:80/status
open http://localhost:80/