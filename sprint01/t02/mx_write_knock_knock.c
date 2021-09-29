#include <unistd.h>

void mx_write_knock_knock(void);

void mx_write_knock_knock(void)
{
	write(1, "Follow the white rabbit.\nKnock, Knock, Neo.\n)", 44);	
}

