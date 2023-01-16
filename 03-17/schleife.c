#include <stdio.h>

int main() {

	int i;

	// FOR
	for (i=1; i<26; i++) {
		printf("Zahl %i\n",i);
	}

	// WHILE
	i = 1;
	do {
		printf("Zahl %i\n",i);
		i++;
	} while (i<26);

	return 0;
}
