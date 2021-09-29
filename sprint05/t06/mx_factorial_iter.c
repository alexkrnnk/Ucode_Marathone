int mx_factorial_iter(int n);

int mx_factorial_iter(int n){
    int fact = 1;

    if (n < 0 || n > 13){
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}
