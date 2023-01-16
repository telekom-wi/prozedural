#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct donor {
	float amount;
	char first[30];
	char last[30];
};

void einlesen(struct donor *in);
void ausgeben(struct donor out);

int main() {

	struct donor spender;
	struct donor *p_spender = &spender;

	einlesen(p_spender);
	ausgeben(spender);

	return 0;
}

void einlesen(struct donor *in) {
	printf("\nBitte geben Sie den Nachnamen ein:\n");
	scanf("%s", in->last);

	printf("\nBitte geben Sie den Vornamen ein:\n");
	scanf("%s", in->first);

	printf("\nBitte geben Sie den Betrag ein:\n");
	scanf("%f", &in->amount);
}

void ausgeben(struct donor out) {

	printf("\nDetails:\n");
	printf("Vorname:  %s\n", out.first);
	printf("Nachname: %s\n", out.last);
	printf("Betrag:   %.2f\n", out.amount);

}
