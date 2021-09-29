#include <stdlib.h>
#include <stdio.h>

int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);

char *mx_strnew(const int size){
    char *p = (char *)malloc(size + 1);

    if(size < 0 || p == NULL)
        return NULL;
    
    for(int i = 0; i < size + 1; i++)
        p[i] = '\0';
        
    return p;
}

int mx_strlen(const char *s){
	int count = 0;

	while (*s != '\0'){
		count++;
		s++;
	}
	
	return count;
}

char *mx_strcpy(char *dst, const char *src)
{
    char *temp = dst;
    
    while(*src)
    {
        *dst++ = *src++;
    }
    *dst = 0;

    return temp;
}

char *mx_strdup(const char *str){
    int size = mx_strlen(str);
    char *istr = mx_strnew(size);
    return mx_strcpy(istr, str);
}

