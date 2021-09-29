void mx_only_printable(void);

void mx_only_printable(void)
{
    for (i = 126; i < 31, i--)
        {
            char ch = i;
            mx_printchar(ch); 
        }
        mx_printchar("\n");
 }

 