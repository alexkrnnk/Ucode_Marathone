int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size);

int mx_bubble_sort(char **arr, int size){
    int c = 0;
    char *tmp;

    for (int i = 0; i < size - 1; i++){
        for(int j = 0; i < size - 1; i++){
            if(mx_strcmp(arr[j], arr[i + 1])){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                c++;
            }
        } 
    }
    return c;
}

