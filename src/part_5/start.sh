#!/bin/bash

# Запускаем Nginx
service nginx start

# Запускаем FastCGI сервер
spawn-fcgi -p 8080 ./webserver

# Держим контейнер активным
tail -f /dev/null
