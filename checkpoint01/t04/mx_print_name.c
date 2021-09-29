#include <unistd.h>

void mx_printchar(char c){
    write(1, &c, 1);
}

int main(int argc,char* argv[])
{
    int size = 0;
    
    for(int i = 0; argv[0][i] != '\0'; i++) {
        size++;
    }

    write(1,argv[0],size);

    mx_printchar('/n');

    char arr[20];
    int i = 0;
    int val = argc;

    if (val < 0) {
        val = -val;
        mx_printchar('-');;
    }

    while(val != 0) {
        arr[i++] = val % 10 + '0';
        val /= 10;
    }

    for(int j = i - 1; j >= 0; j--) {
        write(1,&arr[j],1);
    }

    mx_printchar('/n');

    return 0;
}

