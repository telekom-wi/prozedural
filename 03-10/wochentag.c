#include <stdio.h>

int main() {

	int wtag;
	wtag = 0;

	printf("Bitte geben Sie den Wochentag numerisch ein:\n");
	scanf("%i", &wtag);

	// Plausible?
	if ((wtag <= 0) || (wtag >= 8)) {
		printf("Bitte einen Wert zwischen 1 und 7 eingeben\n");
		return 1;
	}

	// Conditional output

	switch (wtag) {
		case 1: printf("Sonntag\n");
			break;
		case 2: printf("Montag\n");
			break;
		case 3: printf("Dienstag\n");
			break;
		case 4: printf("Mittwoch\n");
			break;
		case 5: printf("Donnerstag\n");
			break;
		case 6: printf("Freitag\n");
			break;
		case 7: printf("Samstag\n");
			break;
		default: printf("Should never be reached\n");
	}

	return 0;
}
