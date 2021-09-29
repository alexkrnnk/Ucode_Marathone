#include <unistd.h>

void mx_printchar(char c);
void mx_printint(int c);

void mx_printchar(char c){
    write(1, &c, 1);
}

void mx_printint(int n){
    if (n < 0) {
		n *= -1;
		mx_printchar('-');
	}
	else if (n == 0)
	{
		mx_printchar('0');
		return;
	}

	char arr[11];
	int i = 0;

	for (; n != 0; n /= 10, i++) {
		arr[i] = (char)(n % 10) + '0';
	}

	i--;
	for (; i >= 0; i--) {
		if(arr[i] != '\0') {
			mx_printchar(arr[i]);
		}
	}
}

