void mx_str_reverse(char *s);

void mx_str_reverse(char *s){
    int len = 0;
    char *rev = s;
    for(int i = 0; rev[i] != '\0'; i++){
        len++;
    }
    
    for(int i = 0; i < len / 2; i++){
        int temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}

