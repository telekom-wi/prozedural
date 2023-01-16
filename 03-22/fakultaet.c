#include <stdio.h>

int main() {

	int i, oper, result;
	i = 0; oper = 0; result = 1;

	printf("Bitte geben Sie den Operanden ein:\n");
	scanf("%i", &oper);

	// Check for overflow
	if ((oper < 1) || (oper > 10)) {
		printf("Integer overflow\n");
		return 1;
	}

	for (i=1; i<=oper; i++) {
		result = result * i;
	}

	printf("Die Fakultaet von %i ergibt: %i\n", oper, result);

	return 0;
}
