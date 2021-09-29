#include "../inc/header.h"

int mx_check_filepath(char *check_arg)
{
    int check_open = open(check_arg, O_RDONLY);
    
    if (check_open < 0)
    {
        mx_printerr("mx_cat: ");
        mx_printerr(check_arg);
        mx_printerr(": No such file or directory\n");
        exit(0);
    }

    return check_open;
}

