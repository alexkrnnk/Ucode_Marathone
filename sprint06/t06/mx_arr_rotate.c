void mx_arr_rotate(int *arr, int size, int shift);

void mx_arr_rotate(int *arr, int size, int shift){
    if (shift > 0){
       for(int i = 0; i < shift; i++){
            int t = arr[size - 1];
            
            for (int j = size - 1; j > 0; j--)
                arr[j] = arr[j - 1];
            arr[0] = t;
       }
    }
    else{
        shift = -shift;
        for(int i = 0; i < size - shift ; i++){
            int t = arr[size - 1];
            
            for (int j = size - 1; j > 0; j--)
                arr[j] = arr[j - 1];
            arr[0] = t;
        }
    }

}

