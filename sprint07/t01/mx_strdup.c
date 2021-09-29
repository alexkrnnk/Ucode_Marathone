int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *istr = mx_strnew(size);
    return mx_strcpy(istr, str);
}

