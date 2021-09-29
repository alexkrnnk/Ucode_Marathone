void mx_pyramid(int n);
void mx_printchar(char c);

void mx_pyramid(int n){
    int key = 1;
    int space = n - 1;
    int second_space = n;
    int third_space = n;
    int slash = n;
    int vertical = n / 2;
    int horizontal = n - 1;
    if (n > 1){

    
        for (int i = 0; i < slash; i++){
            for (int j = 0; j < space; j++)
            {
                mx_printchar(' ');
            }
            mx_printchar('/');
            space--;

            for (int j = 0; j < second_space - space - 3; j++){
                if(i < horizontal){
                    mx_printchar(' ');
                }
                else{
                    mx_printchar('_');
                }
            }
            second_space++;
            mx_printchar('\\');
            
            for(int j = 0; j < (second_space - space - 3)/2; j++){
                if (i < n/2){
                    mx_printchar(' ');
                }
                else{
                    if(j == vertical - 1){
                        for(int k = 0; k < vertical - key; k++){
                            
                            mx_printchar(' ');
                        }
                        key++;
                        third_space--;
                    }
                    
                }
            }
            third_space++;
            if (i < vertical){
                if (i > 0){
                    mx_printchar('\\');
                }    
            }
            else{
                mx_printchar('|');
            }
            mx_printchar('\n');
        }
    }
}

