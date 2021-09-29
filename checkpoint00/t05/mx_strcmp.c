int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2){
    int first_count = 0;
    int second_count = 0;
    for(int i = 0; s1[i] != '\0'; i++)
        first_count++;
    for(int i = 0; s2[i] != '\0'; i++)
        second_count++;
    if (first_count > second_count || first_count < second_count)
        return first_count - second_count;
    return 0 ;
}

