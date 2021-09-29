int mx_count_words(const char *str, char delimiter);

int mx_count_words(const char *str, char delimiter)
{
    int count = 0;
    int words = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {

        if(str[i] != delimiter)
        {
            if(!words)
            {
                count++;
                words = 1;
            }
        }
        
        else
        {
            words = 0;
        }

    } 

    return count;
}

