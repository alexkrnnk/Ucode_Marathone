#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *mx_strnew(const int size);
void mx_printchar(char c);
void mx_printerr(const char *s);
int mx_strlen(const char *s);
void mx_printstr(const char *s);

void mx_printchar(char c) {
	write(1, &c ,1);
}

int mx_strlen(const char *s) {
    int count = 0;

    while(s[count] != '\0') {
        count++;
    }
    return count;
}


void mx_printstr(const char *s) {
	write(1, s, mx_strlen(s));
}

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}	



char *mx_strnew(const int size) 
{
    char *buff = NULL;
    if (size > 0) 
    { 
        buff = malloc(size+1);
        buff[size] = '\0';    
    }
    return buff;
}

int main(int argc, char *argv[])
{
    int open_file;
    int length = 0;
    int i = 0;
    char buf[1];
    char *p = NULL;
  
    if (argc == 2)
    {
        open_file = open(argv[1], O_RDONLY);
        if (open_file < 0)
        {
            mx_printerr("error");
            return 0;
        }
        while (read(open_file, buf, 1))
            length++;

        p = (char *)mx_strnew(length);

        if (p == NULL)
        {
            mx_printerr("error");
            return 0;
        }

        close(2);

        open_file = open(argv[1], O_RDONLY);

        if (open_file < 0){
            mx_printerr("error");
            return 0;
        }

        while (read(open_file, buf, 1))
        {
            p[i] = buf[0];
            i++;
        }
        
        p[i] = '\0';
        mx_printstr(p);
    }
    else
    {
        mx_printstr("usage: ./read_file [file_path]");
        mx_printchar('\n');
    }
}

