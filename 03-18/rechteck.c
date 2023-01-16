#include <stdio.h>

int main() {

	int i, j;

	// FOR
	for (i=0; i<10; i++) {
		for (j=0; j<10; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");

	// WHILE
	i = 0;
	do {
		j = 0;
		do {
			printf("*");
			j++;
		} while (j<10);
		i++;
		printf("\n");
	} while (i<10);
	printf("\n\n");

	return 0;
}
