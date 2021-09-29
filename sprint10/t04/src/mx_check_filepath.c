#include "../inc/header.h"

int mx_check_filepath(char *check_arg)
{
    int check_open = open(check_arg, O_RDONLY);
    
    if (check_open < 0)
    {
        mx_printerr("mx_wc: ");
        mx_printerr(check_arg);
        mx_printerr(": open: ");
        mx_printerr("No such file or directory");
        mx_printerr("\n");
        exit(0);
    }

    return check_open;
}

