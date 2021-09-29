#include <stdbool.h>
#include <stdlib.h>

void mx_sort(int *arr, int size, bool (*f)(int, int));

void mx_sort(int *arr, int size, bool (*f)(int, int)){
    for (int i = 0; i < size - 1; i++){
        for(int j = 0; i < size - 1; i++){
            if(f(arr[j], arr[j + 1])){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        } 
    }
}

