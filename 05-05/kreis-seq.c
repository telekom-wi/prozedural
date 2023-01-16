#include <stdio.h>
#include <math.h>

float inputValue() {
	float ret_val;
	ret_val = 0.0;

	printf("Bitte geben Sie den Radius ein:\n");
	printf(">>");
	scanf("%f", &ret_val);

	return ret_val;
}

void kreisUmfang(float r, float* umfang) {

	*umfang = M_PI * 2 * r;

}


void kreisFlaeche(float r, float* flaeche) {

	*flaeche = M_PI * r * r ;

}

int main() {

	// Declare variables
	float f1, f2, f3;
	f1 = 0.0; f2 = 0.0; f3 = 0.0;

	f1 = inputValue();
	kreisUmfang(f1, &f2);
	kreisFlaeche(f1, &f3);

	printf("Der Umfange eines Kreises mit dem Radius %f ist %f\n", f1, f2);

	printf("Die Flaeche eines Kreises mit dem Radius %f ist %f\n", f1, f3);

	return 0;
}
