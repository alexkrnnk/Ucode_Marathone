int mx_atoi(const char *str);

int mx_atoi(const char *str){
    int num = 0;
    int i = 0;
    int neg = 1;
    if(str[0] == '-'){
        neg = -1;
        i++;
    }
    while (str[i] && str[i] >= 48 && str[i] <= 57){
        num = num * 10 + (str[i] - '0');
        i++;
    }
    if(str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'){
        return 0;
    }
    num = num * neg;
    return num;
}

