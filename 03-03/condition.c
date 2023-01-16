#include <stdio.h>

int main() {

	int zahl1, zahl2, zahl3;
	zahl1 = 7; zahl2 = 5; zahl3 = 10;

	// Conditional output
	if ( zahl1 < zahl2 < zahl3 ) printf("First Condition true\n");

	if (( zahl1 < zahl2) && (zahl2 < zahl3)) printf("Second Condition true\n");

	return 0;
}
