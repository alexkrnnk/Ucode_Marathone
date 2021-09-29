#include <stdlib.h>
#include <stdbool.h>

char *mx_strnew(const int size);
char *mx_strtrim(const char* str);
bool mx_isspace(char c);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strlen(const char *s);
void mx_strdel(char **str);
char *mx_del_extra_whitespaces(const char *str);

char *mx_del_extra_whitespaces(const char *str){
    if (mx_strlen(str) <= 0 || str == 0){
        return NULL;
    }

    char *tmp_memory = mx_strtrim(str);
    int space1 = 0;
    int space2 = 0;
    int size = mx_strlen(tmp_memory);
    int i = 0;
    
    for(; i < size; i++){
        if(mx_isspace(tmp_memory[i]) 
        && mx_isspace(tmp_memory[i + 1])){
            space1++;
        }
    }

    int new_size = size - space1;
    char *p = mx_strnew(new_size);
    for (int i = 0, j = 0; i < new_size; j++){
        if(mx_isspace(tmp_memory[j])){
            if(space2 == 1)
                continue;
            space2 = 1;
        }
        else
            space2 = 0;
        p[i] = tmp_memory[j];
        i++;
    }
    mx_strdel(&tmp_memory);
    return p;
}

