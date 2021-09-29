#include <stdlib.h>

char *mx_strdup(const char *str);

char *mx_strdup(const char *str)
{
    if(str == NULL) {
        return NULL;
    }

    char *output = NULL;

    int size = 0;
    
    for(int i = 0; str[i] != '\0'; i++) {
        size++;
    }

    output = (char*)malloc(size + 1);

    for(int i = 0; i < size + 1; i++) {
            *(output + i) = '\0';
        }
    
    char *temp_out = output;
    
    while(*str)
    {
        *output++ = *str++;
    }
    *output = 0;
    
    return temp_out;

}


