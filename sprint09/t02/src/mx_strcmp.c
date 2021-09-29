int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2)
{
    int count1 = 0;
    int count2 = 0;
    while(s1[count1] != '\0')
    {
        count1++;
    }
    while(s2[count2] != '\0')
    {
        count2++;
    }

    if(count1 != count2)
    {
        return 1;
    }
    else 
    {
        for (int i = 0; s1[i] != '\0' ; i++)
        {
            if (s1[i] != s2[i])
            {
                return 1;
            }
        }
    }
    return 0;
}

