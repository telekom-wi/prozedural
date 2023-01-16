#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct custStruct {
	char first[30];
	char last[30];
};

struct billStruct {
	struct custStruct cust;
	float amount;
};

int main() {

	struct billStruct bill;
	struct custStruct customer;

	printf("\nBitte geben Sie den Nachnamen ein:\n");
	scanf("%s", customer.last);

	printf("\nBitte geben Sie den Vornamen ein:\n");
	scanf("%s", customer.first);

	bill.cust = customer;

	printf("\nBitte geben Sie den Betrag ein:\n");
	scanf("%f", &bill.amount);

	printf("\nRechnung:\n");
	printf("Vorname:  %s\n", bill.cust.first);
	printf("Nachname: %s\n", bill.cust.last);
	printf("Betrag:   %.2f\n", bill.amount);

	return 0;
}
