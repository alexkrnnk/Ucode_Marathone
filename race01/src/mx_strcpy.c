#include "../inc/minilibmx.h"

char *mx_strcpy(char *dst, const char *src)
{
    
    int count2 = 0;
    while(src[count2] != '\0')
    {
        count2++;
    }
    for (int i = 0; src[i] && i < count2; i++)
    {
        dst[i] = src[i];
    }
    *dst = '\0';
    return 0;
}

