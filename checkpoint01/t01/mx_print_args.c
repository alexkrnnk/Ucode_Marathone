#include <unistd.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);

void mx_printchar(char c){
    write(1, &c, 1);
}

void mx_printstr(const char *s){
    write(1, s, mx_strlen(s));
}

int mx_strlen(const char *s){
	int count = 0;

	while (*s != '\0'){
		count++;
		s++;
	}
	
	return count;
}

int main(int argc, char *argv[]){
    for(int i = 1; i < argc; i++){
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

