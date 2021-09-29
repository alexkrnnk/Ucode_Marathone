#include <stdlib.h>

void mx_del_strarr(char ***arr);
void mx_strdel(char **str);

void mx_del_strarr(char ***arr){
    int tmp = 0;
    while (tmp != NULL){
        mx_strdel(&(*arr[i]));
    }

    free(*arr);
    *arr = NULL;
}

