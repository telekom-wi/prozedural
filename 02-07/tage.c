#include <stdio.h>

int main() {

	int tage, stunden, minuten, sekunden;
	tage = 0; stunden = 0; minuten = 0; sekunden = 0;

	printf("Bitte geben Sie die Anzahl der Tage ein:\n");
	scanf("%i", &tage);

	// Calculation
	stunden = tage * 24;
	minuten = stunden * 60;
	sekunden = minuten * 60;

	printf("%i Tage haben %i Stunden, %i Minuten bzw %i Sekunden\n", tage, stunden, minuten, sekunden);

	return 0;
}
