FROM nginx

COPY nginx.conf /etc/nginx/
COPY start.sh /
COPY server.c /

RUN set -ex \
    && apt-get update \
    && apt-get install -y --no-install-recommends \
        gcc \
        libc6-dev \
        make \
        spawn-fcgi \
        libfcgi-dev \
    && gcc server.c -o webserver -lfcgi \
    && chmod +x /start.sh \
    && apt-get purge -y --auto-remove gcc libc6-dev make \
    && rm -rf /var/lib/apt/lists/* \
    && addgroup --system nginx \
    && adduser --system --no-create-home --disabled-password --ingroup nginx nginx

# Указываем точку входа
ENTRYPOINT ["./start.sh"]
