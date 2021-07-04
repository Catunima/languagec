#include <stdio.h>

int hash(char chars[]) {
	int i;              /* index into an array */
	int hh = 0;       /* hash code */

	for (i = 0; i < sizeof(chars); ++i) {
		hh += chars[i];
	}

	return(hh);
}

int main(void) {
	char array[] = { 'A', 'b', 'C', 'D' };

	printf("Result: %d\n", hash(array));

	return(0);
}