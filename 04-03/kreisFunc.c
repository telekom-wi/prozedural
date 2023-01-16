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

