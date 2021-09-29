#include "../inc/minilibmx.h"

void mx_printerr(const char *s){
    s = mx_del_extra_whitespaces(s);
    write(2, s, mx_strlen(s));
}

