#include "../inc/header.h"

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        int size;
        char buff[1];
        size = read(0, buff, 1);

        while (size)
        {
            write(1, buff, 1);
            size = read(0, buff, 1);
        }
        
        return 0;
    }

    for (int i = 1; i < argc; i++)
    {
        int first_file = mx_check_filepath(argv[i]);
        mx_print_from_file(first_file);

        if (close(first_file) < 0)
        {
            mx_printerr("error\n");
            exit(0);
        }
    }

    return 0;
}

