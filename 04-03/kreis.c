#include <stdio.h>
#include "kreisFunc.h"


int main() {

	// Declare variables
	float f1;
	f1 = 0.0;

	// Read radius
	f1 = inputValue();

	// Output circumference
	printf("Der Umfange eines Kreises mit dem Radius %f ist %f\n", f1, kreisUmfang(f1));

	// Output surface
	printf("Die Flaeche eines Kreises mit dem Radius %f ist %f\n", f1, kreisFlaeche(f1));

	return 0;
}
