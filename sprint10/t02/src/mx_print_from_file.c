#include "../inc/header.h"

void mx_print_from_file(int first_file)
{
    int size;
    char buff[1];
    size = read(first_file, buff, 1);

    while (size)
    {
        buff[size] = '\0';
        write(1, buff, 1);
        size = read(first_file, buff, 1);
    }
}

