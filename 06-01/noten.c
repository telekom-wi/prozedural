#include <stdio.h>

int main() {

	float noten[10] = { 0 };
	int i = 0;
	float mw = 0.0;

	for (i=0; i<10; i++) {

		printf("Bitte geben Sie Note %i zwischen 1 und 6 ein: ", i+1);
		scanf("%f",&noten[i]);
		if ((noten[i] < 1.0) || (noten[i] > 6.0)) noten[i] = 3.0;
	
	}

	for (i=0; i<10; i++) {

		printf("Sie haben Note %i als %.02f eingegeben\n", i+1, noten[i]);
	
	}

	// Mittelwert
	for (i=0; i<10; i++) {

		mw = mw + noten[i];
	
	}
	mw = mw / 10.0;

	printf("Der Mittelwert Ihrer Noten betraegt %.02f\n", mw);
	printf("(Declared array elements %d)\n", sizeof(noten)/sizeof(float));

	return 0;

}
