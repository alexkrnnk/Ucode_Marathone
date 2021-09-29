#include "get_address.h"

char* mx_nbr_to_hex(unsigned long nbr){
    char *arr = mx_strnew(50);
    int i = 0;

    while(nbr != 0) {

      int tmp = 0;
      tmp = nbr % 16;

      if(tmp < 10) {
         arr[i] = tmp + 48;
         i++;
      } 
      else {
         arr[i] = tmp + 87;
         i++;
      }

      nbr = nbr / 16;
    }

    int len = mx_strlen(arr);
    char *p = mx_strnew(len);

    for(int i = 0; i < len; i++)
        p[i] = arr[len - i - 1];
    free(arr);

    return p;
}

