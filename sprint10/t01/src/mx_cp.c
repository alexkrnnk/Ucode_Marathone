#include "../inc/header.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        mx_printerr("usage: ./mx_cp [source_file] [target_file]\n");
        exit (0);
    }

    int first_file = mx_check_filepath(argv[1]);
    int second_file = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);

    mx_print_from_file(first_file, second_file);

    if (close(first_file) < 0)
    {
        mx_printerr("error\n");
        exit(0);
    }

    if (close(second_file) < 0)
    {
        mx_printerr("error\n");
        exit(0);
    }

    return 0;
}

