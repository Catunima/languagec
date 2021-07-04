
#include <stdio.h>

int begins(char string1[], char string2[]) {
	int i = 0;          /* index into a string */

	while (1) {

		if (string1[ i ] == '\0') {
			return(1);
		}
		if (string1[i] != string2[i]) {
			return(0);
		}

		++i;
	}
}

int main(void) {

	if (begins("fodo", "foobar")) {
		printf("this okay!\n");
	} else {
		printf("no.\n");
	}

	return(0);
}