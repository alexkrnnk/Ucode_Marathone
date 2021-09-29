#include "file_to_str.h"

char *mx_file_to_str(const char *filename)
{
    if (filename == NULL)
    {
        return NULL;
    }

    int file = open(filename, O_RDONLY);

    if (file < 0)
    {
        return NULL;
    }

    char buff;
    int length = 0; 

    while (read(file, &buff, 1))
    {
        length++;
    }

    if (close(file) < 0)
    {
        return NULL;
    }

    file = open(filename, O_RDONLY);
    char *arr = mx_strnew(length);

    for (int i = 0; read(file, &buff, 1); i++)
    {
        arr[i] = buff;
    }

    if (close(file) < 0)
    {
        return NULL;
    }

    return arr;
}

