#include <unistd.h>

void mx_matrix_voice(void);

void mx_matrix_voice()
{
    write(1, "\a", 1);
}

