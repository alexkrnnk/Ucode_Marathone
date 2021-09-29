void mx_printchar(char c);

void mx_cube(int n);

void mx_cube(int n)
{
    if(n > 1){
        int space = n;
        int vertical = n; 
        int horizontal = 2 * n;
        int slash = n / 2;

        for(int i = 0; i < (space / 2) + 1; i++){
            mx_printchar(' ');
        }

        mx_printchar('+');

        for(int i = 0; i < horizontal; i++){
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');

        space = slash;
        for(int i = 0;i < slash; i++){
            for(int j = 0; j < space; j++){
                mx_printchar(' ');
            }
            mx_printchar('/');
            for(int k = 0; k < horizontal; k++){
                mx_printchar(' ');
            }
            mx_printchar('/');

            for(int l = 0; l < i; l++){
                mx_printchar(' ');
            }
            mx_printchar('|');
            mx_printchar('\n');
            space--;
        }


        for(int i = 0; i < space; i++){
            mx_printchar(' ');
        }
        mx_printchar('+');

        for(int i = 0; i < horizontal; i++){
            mx_printchar('-');
        }
        mx_printchar('+');

        for (int i = 0; i < slash; i++){ 
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
        
        for(int i = 0; i < n; i++){
            if(((slash < i + 1) && (n % 2 == 0)) || ((slash < i) && (n % 2 == 1))){
                slash--;
            }
            mx_printchar('|');
            for (int i = 0; i < horizontal; i++){
                mx_printchar(' ');
            } 
            mx_printchar('|');

            for (int j = 0; j < slash; j++){
                mx_printchar(' ');
            }
            if (((slash == i + 1) && (n % 2 == 0)) || ((slash == i) && (n % 2 == 1))){
                mx_printchar('+');
            }
            else if (slash < n / 2){
                mx_printchar('/');
            }
            else{ 
                mx_printchar('|');
            }
            mx_printchar('\n');
        }

        mx_printchar('+');
        for (int i = 0; i < horizontal; i++){ 
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');
  }
  else{
    mx_printchar('0');
  }
}

