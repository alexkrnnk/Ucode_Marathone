#include <unistd.h>

void mx_printstr(const char *s);

void mx_printstr(const char *s){
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
        len++;
    write(1, s, len);
}

