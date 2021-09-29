int mx_strlen(const char *s);

int mx_strlen(const char *s)
{
    int count = 0;
    while(*s != '\0')
    {
        s++;
        count++;
    }
    return count;
}

