#include "duplicate.h"
#include <stdlib.h>
#include <stdio.h>

int *mx_copy_int_arr(const int *src, int size);

t_intarr *mx_del_dup_sarr(t_intarr *src){
    int dst_size = 0;
    for (int i = 0; i < src->size; i++){
        for (int j = i + 1; j < src->size; j++){
            if (src->arr[i] == src->arr[j]){
                for (int a = j; a < src->size - 1; a++)
                    src->arr[a] = src->arr[a + 1];
                
                src->size--;

                if (src->arr[i] == src->arr[j])
                    j--;

            }
        }
    }
    src->size = dst_size;

    int *arr = (int *)malloc(src->size * dst_size);

    arr = mx_copy_int_arr(src->arr, dst_size);

    t_intarr *res = (t_intarr *)malloc(sizeof(t_intarr));

    res->arr = arr;

    res->size = dst_size;

    free(arr);
    
    return res;
}

int main(void){
    int arr[] = {1, 2, 2, 8, 4, 6, 8, 9, -4, 3, 4};
    int dst_size = 8;
    int s = 11;
    t_intarr *new_arr = mx_del_dup_sarr(new_arr->arr, size->s, &dst_size);
    
    for(int i = 0; i < 8; i++)
    {
        printf("%d \n",new_arr->arr[i]);
    }
}

