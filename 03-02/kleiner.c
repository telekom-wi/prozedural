#include <stdio.h>

int main() {

	int zahl1, zahl2;
	zahl1 = 0; zahl2 = 0;

	printf("Bitte geben Sie die erste Zahl ein:\n");
	scanf("%i", &zahl1);

	printf("Bitte geben Sie die zweite Zahl ein:\n");
	scanf("%i", &zahl2);

	// Conditional output
	if (zahl1 == zahl2) {
		printf("%i und %i sind gleich\n", zahl1, zahl2);
	} else if (zahl1 > zahl2) {
			printf("%i ist groesser als %i\n", zahl1, zahl2);
		} else {
			printf("%i ist kleiner als %i\n", zahl1, zahl2);
		}

	return 0;
}
