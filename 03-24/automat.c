#include <stdio.h>

int main() {

	int i, select, amount;
	i = 0; select = 0; amount = 0;
	float price, payment, total;
	price = 0.0; payment = 0.0; total = 0.0;

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

	printf("Bitte geben Sie die Anzahl der Getraenke ein\n");
	printf(">>");
	scanf("%i", &amount);

	// Plausible?
	if ((amount < 1) || (amount > 5)) {
		printf("Bitte einen Wert zwischen 1 und 5 eingeben\n");
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
	price = price * amount;

	// Collect Money
	do {
		printf("Bitte werfen Sie %.2f Euro ein\n", price - total);
		printf(">>");
		scanf("%f", &payment);

		total = total + payment;

	} while (total < price);

	if (total > price) {
			printf("Bitte entnehmen Sie Ihr Restgeld von %.2f Euro\n", (price - total) * -1.0);
	}

	for (i=1; i<=amount; i++) {
		printf("Flasche %i von %i wird ausgegeben\n", i, amount);
	}

	return 0;
}
