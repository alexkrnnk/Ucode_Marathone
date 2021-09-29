#include <unistd.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]){
    int slash = 0;
    char *tool = argv[0];
    argc = 0;

    for(int i = 0; tool[i]; i++){
        if(tool[i] == '/'){
            slash++;
        }
    }

    if(tool[0] == '/'){
        slash--;
    }

    for (int i = 0; i < slash; i++){
        tool = mx_strchr(tool, '/');
    }

    if(tool[0] == '/'){
        tool = mx_strchr(tool, tool[1]);
    }

    mx_printstr(tool);
    mx_printchar('\n');
    return 0;
}



