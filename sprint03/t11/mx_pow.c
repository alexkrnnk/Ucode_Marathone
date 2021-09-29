#include <stdio.h>

double mx_pow(double n, unsigned int pow);

double mx_pow(double n, unsigned int pow)
{
    double temp;
    if (pow == 0)
    {
        return 1;
    }
    else if (n == 0)
    {
        return 0;
    }

    temp = mx_pow(n, pow / 2);
    
    if ((pow % 2) == 0)
    {
        return temp * temp;
    }
    else if (pow > 0)
    {
        return n * temp * temp;
    }
    else
    {
        return (temp * temp) / n;
    }
}
