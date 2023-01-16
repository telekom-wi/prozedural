#include <stdio.h>

int main() {

	int tage, stunden, minuten, sekunden, sekunden_alt;
	tage = 0; stunden = 0; minuten = 0; sekunden = 0; sekunden_alt;

	printf("Bitte geben Sie die Anzahl der Sekunden ein:\n");
	scanf("%i", &sekunden);

	// Calculation
	sekunden_alt = sekunden;
	tage = sekunden / 86400;
	sekunden = sekunden - (tage * 86400);
	stunden = sekunden / 3600;
	sekunden = sekunden - (stunden * 3600);
	minuten = sekunden / 60;
	sekunden = sekunden - (minuten * 60);


	printf("%i Sekunden sind %i Tage, %i Stunden, %i Minuten und %i Sekunden\n", sekunden_alt, tage, stunden, minuten, sekunden);

	return 0;
}
