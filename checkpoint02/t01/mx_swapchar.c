void mx_swap_char(char *s1, char *s2);

void mx_swap_char(char *s1, char *s2){
    char first_temp = *s1;
    char second_temp = *s2;

    *s1 = second_temp;
    *s2 = first_temp;
}

