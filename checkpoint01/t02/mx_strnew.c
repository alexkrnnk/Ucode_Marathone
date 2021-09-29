#include <stdlib.h>

char *mx_strnew(const int size);

char *mx_strnew(const int size){
    char *p = (char *)malloc(size + 1);

    if(size < 0 || p == NULL)
        return NULL;
    
    for(int i = 0; i < size + 1; i++)
        p[i] = '\0';
        
    return p;
}

