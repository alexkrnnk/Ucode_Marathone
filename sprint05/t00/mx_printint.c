void mx_printchar(char c);

void mx_printint(int n){
    int a = 0;
    int b = n;

    while(b > 0){
        b = b / 10;
        a++;
    }

    char ch[a];

    for (int i = 0; i < a; i++){
        int j = n % 10;
        ch[i] = j + 48;
        n = n / 10;
    }

    for (int i = a - 1; i != -1; i--){
        mx_printchar(ch[i]);
    }
}

