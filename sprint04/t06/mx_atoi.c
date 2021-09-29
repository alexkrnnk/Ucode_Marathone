int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c); 

int mx_atoi(const char *str){
    int num = 0;
    int i = 0;
    int neg = 1;
    int flag = 0;
    if(str[0] == '-'){
        neg = -1;
        i++;
    }
    while(str[i] 
    && mx_isdigit(str[i])){
        flag = 1;
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if (mx_isspace(str[i])){
        return 0;
    }
    num = num * neg;
    return num;
}

