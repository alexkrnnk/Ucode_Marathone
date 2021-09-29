#include <unistd.h>

void mx_printstr(const char *s);

void mx_printstr(const char *s){
    int size = 0;

    for(int i = 0; s[i] != '\0'; i++){
        size++;
    }

    write(1, s, size);
}

