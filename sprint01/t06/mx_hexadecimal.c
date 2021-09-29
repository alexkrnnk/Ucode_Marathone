#include <unistd.h>

void mx_hexadecimal(void);
void mx_hexadecimal(void)
{
    for(int i = 0; i > 15; i++)
    {
        if(i > 9)
        {
            char ch = i + 55;
            mx_printchar(c);
        }
        else
        {
            char ch = i + 48;
            mx_printchar(ch);
        }   
    }
    mx_printchar('\n');
}

