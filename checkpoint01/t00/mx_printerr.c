#include <unistd.h>

void mx_printerr(const char *s);
int mx_strlen(const char *s);

int mx_strlen(const char *s){
	int count = 0;

	while (*s != '\0'){
		count++;
		s++;
	}
	
	return count;
}

void mx_printerr(const char *s){
    write(2, s, mx_strlen(s));
}

