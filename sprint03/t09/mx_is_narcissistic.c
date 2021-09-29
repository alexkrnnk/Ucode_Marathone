bool mx_is_narcissistic(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num)
{
    int m = 0;
    int sum = 0;
    int sum_count = 0;
    while (num)
    {
        m = num % 10;
        sum_count += m;
        num = num / 10;
    }
    
    int dupl = num;
    while (dupl)
    {
        sum += mx_pow(dupl % 10, sum_count);
    }
    if (num == sum)
    {
        return true;
    }
    else
    {
        return false;
    }  
}

