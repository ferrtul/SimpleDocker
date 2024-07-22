#!/bin/bash

docker stop server
docker rm server
docker rmi -f nginx
