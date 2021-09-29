int mx_gcd(int a, int b);

int mx_gcd(int a, int b){
    if (a < 0)
        a *= -1;
    else if (b < 0)
        b *= -1;
    else if (a == 0)
        return b;
    else if (b == 0)
        return a;
    
    if (a > b)
        return mx_gcd(a - b, b);
    else if (a < b)
        return mx_gcd(a, b - a);
    else 
        return a;
    
    
}

