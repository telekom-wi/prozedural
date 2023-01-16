#include <stdio.h>

int main() {

	int i, n, fib, prev, prevprev;
	i = 0; n = 0; fib = 0; prev = 1; prevprev = 0;

	printf("Bitte geben Sie eine Zahl ein:\n");
	scanf("%i", &n);

	// Check for overflow
	if ((n < 0) || (n > 20)) {
		printf("Integer overflow\n");
		return 1;
	}


	// First two values 
	if ((n == 0) || (n == 1)) {
		printf("Fibonacci von %i ist %i\n", n, n); 
		return 0;
	}

	for (i=2; i<=n; i++) {
		fib = prev + prevprev;
		prevprev = prev;
		prev = fib;
	}

	printf("Fibonacci von %i ist %i\n", n, fib);

	return 0;
}
