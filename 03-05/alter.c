#include <stdio.h>

int main() {

	int alter;
	alter = 0;

	printf("Bitte geben Sie Ihr Alter ein:\n");
	scanf("%i", &alter);

	// Plausible?
	if ((alter < 0) || (alter > 110)) {
		printf("Your age %i is out of range\n", alter);
		return 1;
	}

	// Conditional output
	if ((alter >= 0) && (alter <= 17)) printf ("Im Alter von %i Jahren sind Sie ein Kind oder Jugendlicher\n", alter);

	if ((alter > 17) && (alter <= 66)) printf ("Im Alter von %i Jahren sind Sie ein Erwachsener\n", alter);

	if ((alter > 66) && (alter <= 110)) printf ("Im Alter von %i Jahren sind Sie ein breits Rentner\n", alter);

	// Nested ifs
	if (alter <= 17) {
		printf ("Im Alter von %i Jahren sind Sie ein Kind oder Jugendlicher\n", alter);
	} else if (alter > 66) {
			printf ("Im Alter von %i Jahren sind Sie ein breits Rentner\n", alter);
		} else {
			printf ("Im Alter von %i Jahren sind Sie ein Erwachsener\n", alter);
		}

	return 0;
}
