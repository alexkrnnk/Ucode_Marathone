void mx_str_separate(const char*str, char delim);
void mx_printchar(char c);

void mx_str_separate(const char *str, char delim)
{
    int count1 = 0;
    while(str[count1] != '\0')
    {
        count1++;
    }
    for (int i = 0; i < count1; i++)
    {
       
        if(str[i] == delim)
        {
            if(str[i + 1] == str[i])
            {
                continue;
            }
            mx_printchar('\n');
            for (int j = i + 1; j < count1; j++)
            {
                mx_printchar(str[j]);
            }
            mx_printchar('\n');
            break;
        }
        mx_printchar(str[i]);
    }  
}

