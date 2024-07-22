# Simple Docker

Введение в докер. Разработка простого докер-образа для собственного сервера.




## Part 1. Готовый докер

Наш выбор пал на довольно простой **nginx**.


##### Взяли официальный докер-образ с **nginx** и выкачали его при помощи `docker pull`.

![part_1.1](../misc/docker_images/part_1/part_1.1.png)

##### Проверили наличие докер-образа через `docker images`.

![part_1.2](../misc/docker_images/part_1/part_1.2.png)

##### Запусти докер-образ через `docker run -d [image_id|repository]`.

![part_1.3](../misc/docker_images/part_1/part_1.3.png)

##### Проверили, что образ запустился через `docker ps`.

![part_1.4](../misc/docker_images/part_1/part_1.4.png)

##### Посмотрели информацию о контейнере через `docker inspect [container_id|container_name]`.

![part_1.5](../misc/docker_images/part_1/part_1.5.png)

По выводу команды определили размер контейнера, список замапленных портов и ip контейнера.

![part_1.6](../misc/docker_images/part_1/part_1.6.png)

Ну и порты:

![part_1.7](../misc/docker_images/part_1/part_1.7.png)

##### Остановили докер образ через `docker stop [container_id|container_name]`.

![part_1.8](../misc/docker_images/part_1/part_1.8.png)

##### Запустили докер с портами 80 и 443 в контейнере, замапленными на такие же порты на локальной машине, через команду *run*.

![part_1.9](../misc/docker_images/part_1/part_1.9.png)

Проверили, что в браузере по адресу *localhost:80* доступна стартовая страница **nginx**:

![part_1.10](../misc/docker_images/part_1/part_1.10.png)

##### Перезапустили докер контейнер через `docker restart [container_id|container_name]`.

![part_1.11](../misc/docker_images/part_1/part_1.11.png)

## Part 2. Операции с контейнером

##### Прочитали конфигурационный файл *nginx.conf* внутри докер контейнера через команду *exec*.

![part_2.1](../misc/docker_images/part_2/part_2.1.png)

##### Создали на локальной машине файл *nginx.conf* и настроили в нем по пути */status* отдачу страницы статуса сервера **nginx**

![part_2.2](../misc/docker_images/part_2/part_2.2.png)

##### Скопировали созданный файл *nginx.conf* внутрь докер-образа через команду `docker cp`.
 - Перезапустили **nginx** внутри докер-образа через команду *exec*.
 - Проверили, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**.

![part_2.3](../misc/docker_images/part_2/part_2.3.png)

##### Экспортировали контейнер в файл *container.tar* через команду *export*.

![part_2.4](../misc/docker_images/part_2/part_2.4.png)

##### Остановили контейнер.

![part_2.5](../misc/docker_images/part_2/part_2.5.png)

##### Удалили образ через `docker rmi [image_id|repository]`, не удаляя перед этим контейнеры.

![part_2.6](../misc/docker_images/part_2/part_2.6.png)

##### Удалили остановленный контейнер.

![part_2.7](../misc/docker_images/part_2/part_2.7.png)

##### Импортировали контейнер обратно через команду *import*.

![part_2.8](../misc/docker_images/part_2/part_2.8.png)

##### Запустили импортированный контейнер.

![part_2.9](../misc/docker_images/part_2/part_2.9.png)

##### Проверили, что по адресу *localhost:80/status* отдается страничка со статусом сервера **nginx**.

![part_2.10](../misc/docker_images/part_2/part_2.10.png)