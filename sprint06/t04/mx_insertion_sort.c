int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size);

int mx_insertion_sort(char **arr, int size){
    int counter = 0;
    
    for(int i = 1; i < size; i++){
        for(int j = i ; j > 0; j--){
            if(mx_strlen(arr[j - 1]) > mx_strlen(arr[j])){
                counter++;
                char *tmp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    
    return counter;
}

