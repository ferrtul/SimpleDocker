#include <fcgi_stdio.h>

int main(void) {
    while (FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n"
               "\r\n"
               "<html><head><title>Hello</title></head>"
               "<body><h1>Hello World!</h1></body></html>");
    }
    return 0;
}

