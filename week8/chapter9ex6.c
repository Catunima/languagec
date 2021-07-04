#include<stdio.h>
#include<stdlib.h>

int main(void){

    int i;          /* index into an array */

	char chars[] = { 'f', 'o', 'o', '-', 'b', '_', 'r' };
	replace(chars);

	for (i = 0; i < sizeof(chars); ++i) {
		printf("%c\n", chars[i]);
	}

    system("pause");
    return 0;
}
#include <stdio.h>

void replace(char char_array[]) {
	int i;          /* index into an array */

	for (i = 0; i < sizeof(char_array); ++i) {
		if (char_array[i] == '-') {
			char_array[i] = '_';
		}
	}
}