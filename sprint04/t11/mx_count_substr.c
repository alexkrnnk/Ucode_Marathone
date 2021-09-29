char *mx_strstr(const char *s1, const char *s2);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_count_substr(const char *str, const char *sub);

int mx_count_substr(const char *str, const char *sub){
    int start = 0;
    int lenstr = mx_strlen(str);
    int lensub = mx_strlen(sub);
    
    if (lensub == 0){
        return 0;
    }
    else{
        for (int i = 0; i < lenstr - lensub; i++){
            for (int j = 0; i < lenstr; i++){
                if(str[i] == sub[j])
                    start++;
            }
        }
    }
    return start;
}