#include <unistd.h>

void mx_print_alphabet(void);

void mx_print_alphabet(void)
{
    char lr = 'a';
    char ur = 'A';
    int skip = 0;
    
    while (lr <= 'z' && ur <= 'Z')
    {
        if(ur)
        {
            mx_printchar(ur);
        }
        else
        {
            mx_printchar(lr);
        }
        skip = !skip;
        lr++;
        ur++;
    }
    mx_printchar('\n');
}

