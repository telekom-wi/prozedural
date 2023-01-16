#include <stdio.h>

int main() {

	float f1, f2;
	f1 = 0.0; f2 = 0.0;

	printf("Bitte geben Sie die erste Zahl ein:\n");
	scanf("%f", &f1);

	printf("Bitte geben Sie die zweite Zahl ein:\n");
	scanf("%f", &f2);

	printf("Die Summe der beiden Zahlen ergibt: %.2f\n", f1 + f2);

	return 0;
}
