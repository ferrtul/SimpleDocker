#include <fcgi_stdio.h>

int main(void) {
    while (FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n"
               "\r\n"
               "<!DOCTYPE html>"
               "<html lang=\"en\">"
               "<head>"
               "<meta charset=\"UTF-8\">"
               "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
               "<title>Hello World</title>"
               "<style>"
               "body {"
               "    display: flex;"
               "    justify-content: center;"
               "    align-items: center;"
               "    height: 100vh;"
               "    margin: 0;"
"    background: url('https://img3.akspic.ru/crops/1/8/6/9/39681/39681-massiv-arktika-nebo-gora-lednik-3840x2160.jpg') no-repeat center center fixed;"
               "    background-size: cover;"
               "    font-family: Arial, sans-serif;"
               "    color: black;"
               "}"
               "h1 {"
               "    font-size: 3em;"
               "}"
               "</style>"
               "</head>"
               "<body>"
               "<h1>Hello World!</h1>"
               "</body>"
               "</html>");
    }
    return 0;
}

