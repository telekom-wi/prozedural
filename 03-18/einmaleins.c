#include <stdio.h>

int main() {

	int i, j;

	// FOR
	for (i=1; i<11; i++) {
		for (j=1; j<11; j++) {
			printf("%2i * %2i = %i\n", j, i, i*j);
		}
		printf("\n");
	}
	printf("\n\n");

	return 0;
}
