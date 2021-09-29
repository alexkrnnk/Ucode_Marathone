void mx_str_reverse(char *s);
int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s)
{
    int length = mx_strlen(s);

    for (int i = 0, j = length - 1; i < j; i++, j--)
    {
        mx_swap_char(&s[i], &s[j]);
    }
}

