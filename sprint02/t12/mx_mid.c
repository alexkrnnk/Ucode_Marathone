int mx_mid(int a, int b, int c);

int mx_mid(int a, int b, int c)
{
    int mid = 0;
    if ((b < a && a < c) || (c < a && a < b))
    {
       mid = a; 
    }
    else if ((a < b && b < c) || (c < b && b < a))
    {
        mid = b;
    }
    else if (c > a && c > b)
    {
        return c;
    }
    return mid;
}
