#include <stdio.h>
#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

bool mx_isdigit(int c) {
	return c >= 48 && c <= 57;
}

bool mx_isspace(char c) {
    if ((c >= 9 && c <=13) || (c == 32))
        return 1;
    else
        return 0;
}

int mx_atoi(const char *str){
    int result = 0;
    bool sign = false;

    if(*str) {
        while(mx_isspace(*str))
            str++;
        if (*str == '-') {
            sign = true;
            str++;   
        }
        else if (*str == '+')
            str++; 

        while (mx_isdigit(*str)) {
            result *= 10;
            if (sign)
                result -= *str-48;
            else
                result += *str-48;
            str++;
        }
    }

    return result;
}

