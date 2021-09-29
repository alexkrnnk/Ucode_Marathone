int mx_count_words(const char *str, char delimiter);

int mx_count_words(const char *str, char delimiter){
    int count = 0;
    int flag = 0;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] != delimiter 
        && flag == 0){
            count += 1;
            flag = 1;
        }
        else if (str[i] == delimiter){
            count++;
        }
    }
    if (flag > 0){
        return count;
    }
    else{
        return 0;
    }
}

