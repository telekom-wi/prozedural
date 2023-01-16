#include <stdio.h>
#include <math.h>

int main() {

	float f1, f2, f3;
	f1 = 0.0; f2 = 0.0; f3 = 0.0;

	printf("Bitte geben Sie den Radius des Kreises in cm ein:\n");
	scanf("%f", &f1);

	f3 = (f1 * f1) * M_PI;

	printf("Der Flaecheninhalt des Kreises betraegt %.2f cm^2 \n", f3);

	return 0;
}
