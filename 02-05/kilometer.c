#include <stdio.h>

int main() {

	float f1, f2, f3;
	f1 = 0.0; f2 = 0.0; f3 = 0.0;

	printf("Bitte geben Sie den Bezinverbrauch in Litern ein:\n");
	scanf("%f", &f1);

	printf("Bitte geben Sie die die gefahrenen Kilometer ein:\n");
	scanf("%f", &f2);

	f3 = (f1 * 100) / f2;

	printf("Der Bezinverbrauch betraegt %.2f Liter pro 100 Kilometer \n", f3);

	return 0;
}
