void mx_deref_pointer(char ******str);

void mx_deref_pointer(char ******str)
{
    char *chstr1;
    char **chstr2;
    char ***chstr3;
    char ****chstr4;
    char *****chstr5;
    str = &chstr5;
    chstr5 = &chstr4;
    chstr4 = &chstr3;
    chstr3 = &chstr2;
    chstr2 = &chstr1; 
    chstr1 = "Follow the white rabbit!"; 
}

