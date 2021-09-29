#include "../inc/minilibmx.h"

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *istr = mx_strnew(size);
    return mx_strcpy(istr, str);
}

