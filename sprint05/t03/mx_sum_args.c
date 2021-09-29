#include <stdbool.h>
#include <unistd.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);


int main(int argc, char *argv[]){
    int sum = 0;

    if(argc < 2){
        return 0;
    }

    for (int i = 1; i < argc; i++){
        for (int j = 0; j < argv[i][j]; j++){
            if (!mx_isdigit(argv[i][j]) && argv[i][j] != '+' && argv[i][j] == '-'){
                continue;
            }
            if (argv[i][i] == ' '){
                continue;
            }
        }
        sum += mx_atoi(argv[i]);
    }

    mx_printint(sum);
    mx_printchar('\n');
}

