#include <stdio.h>

void inputValues(int* z1, int* z2) {

	printf("Bitte geben Sie die erste Zahl ein:\n");
	printf(">>");
	scanf("%i", z1);

	printf("Bitte geben Sie die zweite Zahl ein:\n");
	printf(">>");
	scanf("%i", z2);
}

int main() {

	int zahl1=0; 
	int zahl2=0;

	inputValues(&zahl1, &zahl2);

	printf("Die erste Eingabe %i\n", zahl1);
	printf("Die zweite Eingabe %i\n", zahl2);


	return 0;
}
