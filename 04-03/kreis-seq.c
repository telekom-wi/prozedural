#include <stdio.h>
#include <math.h>

float inputValue() {
	float ret_val;
	ret_val = 0.0;

	printf("Bitte geben Sie eine Zahl ein:\n");
	printf(">>");
	scanf("%f", &ret_val);

	return ret_val;
}

float kreisUmfang(float r) {

	return M_PI * 2 * r;

}


float kreisFlaeche(float r) {

	return M_PI * r * r ;

}

int main() {

	// Declare variables
	float f1;
	f1 = 0.0;

	f1 = inputValue();

	printf("Der Umfange eines Kreises mit dem Radius %f ist %f\n", f1, kreisUmfang(f1));

	printf("Die Flaeche eines Kreises mit dem Radius %f ist %f\n", f1, kreisFlaeche(f1));

	return 0;
}
