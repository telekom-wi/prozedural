#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct donor {
	float amount;
	char first[30];
	char last[30];
};

int main() {

	struct donor spender;

	printf("\nBitte geben Sie den Nachnamen ein:\n");
	scanf("%s", spender.last);

	printf("\nBitte geben Sie den Vornamen ein:\n");
	scanf("%s", spender.first);

	printf("\nBitte geben Sie den Betrag ein:\n");
	scanf("%f", &spender.amount);

	printf("\nDetails:\n");
	printf("Vorname:  %s\n", spender.first);
	printf("Nachname: %s\n", spender.last);
	printf("Betrag:   %.2f\n", spender.amount);

	return 0;
}
