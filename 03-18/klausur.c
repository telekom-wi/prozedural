#include <stdio.h>

int main() {

	int i, j;

	// FOR
	for (i=1; i<11; i++) {
		printf("Zeile %02i: ",i);
		for (j=i; j>0; j--) {
			printf("%i ",j);
		}
		printf("\n");
	}

	return 0;
}
