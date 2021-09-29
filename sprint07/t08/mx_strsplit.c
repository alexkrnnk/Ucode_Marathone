#include <stdlib.h>

void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_count_words(const char *str, char delimiter);
char *mx_strnew(const int size);
char **mx_strsplit(char const *s, char c);

char **mx_strsplit(char const *s, char c){
    int count_words = mx_count_words(s, c);
    char **p = (char**)malloc(6 * count_words);

    for (int i = 0, j = 0; i < count_words; i++){
        int word_length = 0;
        int flag = 0;

        for (; s[j]; j++){
            if (s[j] != c){
                word_length++;

                if (flag == 0)
                    flag = j;

            }
            else if(s[j] == c && word_length){ 
                break;
            }
        }

        char *new_size = mx_strnew(word_length);

        for(int k = 0, m = flag; m < j; k++, m++)
            new_size[k] = s[m];
        p[i] = new_size;
    }

    p[count_words] = NULL;

    return p;
}

