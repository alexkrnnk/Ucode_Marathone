#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr){
    unsigned long tmp = 0;
    unsigned long quot = nbr;
    int len = 0;

    while(quot != 0) {
        quot = quot/16;
        len++;
    }
    quot = nbr;

    char *hexdecnum = mx_strnew(len);
    int i = 0;
    int j = 0; 

    while(quot != 0) {
        tmp = quot % 16;
        if(tmp < 10) {
			tmp=tmp + 48; 
		else
			tmp = tmp + 87; 
        j++;
        
        quot = quot/16;
        hexdecnum[i++] = tmp;
    }
    j--;

    for (int i = 0; i < j; i++, j--){
        char tmp1 = hexdecnum[i];
        hexdecnum[i] = hexdecnum[j];
        hexdecnum[j] = tmp1;
    }
    
    return hexdecnum;   
}

