#include <stdio.h>

char *mx_strjoin(char const *s1, char const *s2);
char *mx_strcat(char *s1, const char *s2);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);


char *mx_strjoin(char const *s1, char const *s2){
    if (s1 == NULL && s2 == NULL)
        return NULL;
    

    if (s1 == NULL && s2 != NULL)
        return mx_strdup(s2);
    

    if (s1 != NULL && s2 == NULL)
        return mx_strdup(s1);
    

    int size_s1 = mx_strlen(s1);
    int size_s2 = mx_strlen(s2);
    char *size = mx_strnew(size_s1 + size_s2);
    char *tmp_s1 = mx_strdup(s1);
    char *tmp_s2 = mx_strdup(s2);
    size = mx_strcat(tmp_s1, tmp_s2);
    return size;




}


