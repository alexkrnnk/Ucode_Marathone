#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size){
    if(size < 0 || src == NULL)
        return NULL;

    int *memory = (int *)malloc(size);

    for (int i = 0; i < size; i++){
        memory[i] = src[i];
    }

    return memory;
}

