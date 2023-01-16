#include <stdio.h>

float inputValue() {
	float ret_val;
	ret_val = 0.0;

	printf("Bitte geben Sie eine Zahl ein:\n");
	printf(">>");
	scanf("%f", &ret_val);

	return ret_val;
}

float multValues(float r1, float r2) {

	return r1 * r2;

}

void printValue(float r1) {
	
	printf("Das Ergenbnis ist %.2f\n", r1);

}

int main() {

	// With variables
	float f1, f2, f3;
	f1 = 0.0; f2 = 0.0; f3 = 0.0;

	f1 = inputValue();

	f2 = inputValue();

	f3 = multValues(f1, f2);

	printValue(f3);

	// Without variables
	printValue(multValues(inputValue(), inputValue()));

	return 0;
}
