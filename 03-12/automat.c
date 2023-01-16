#include <stdio.h>

int main() {

	int select;
	select = 0;
	float price, payment;
	price = 0.0; payment= 0.0;

	printf("Getraenkeautomat v0.1\n\n\n");
	printf("Bitte waehlen Sie Ihr Getraenk aus:\n");
	printf("1/ Wasser (0.50 Euro)\n");
	printf("2/ Limo (1.00 Euro)\n");
	printf("3/ Bier (2.00 Euro)\n");
	printf(">>");
	scanf("%i", &select);

	// Plausible?
	if ((select < 1) || (select > 3)) {
		printf("Bitte einen Wert zwischen 1 und 3 eingeben\n");
		return 1;
	}

	// Determine price
	switch (select) {
		case 1: price = 0.5;
			break;
		case 2: price = 1.0;
			break;
		default: price = 2.0;
	}

	// Collect Money
	printf("Bitte werfen Sie %.2f Euro ein\n", price);
	printf(">>");
	scanf("%f", &payment);

	// Check amount
	if (payment == price) {
		printf("Bitte entnehmen Sie Ihr Getraenk\n");
	} else {
		printf("Bitte passend einfwerfen!\n");
	}

	return 0;
}
