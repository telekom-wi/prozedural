#include <stdio.h>

float getMax(float array_float[], int len);

int main () {

	float array_float[5] = { 1.0, 5.0, 13.0, 9.0, 4.0 };

	printf("Result %.2f\n", getMax(array_float, 5));

}

float getMax(float array_float[], int len) {

	float res;
	int i;

	res = array_float[0];

	for (i=1; i<len; i++) {
		if (array_float[i] > res) res = array_float[i];
	}

	return res;

}

