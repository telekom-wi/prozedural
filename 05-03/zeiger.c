#include <stdio.h>

int main() {

	int i=0;
	int *zeiger=NULL;

	// Init values
	i = 5;
	zeiger = &i;

	// Print values
	printf("Value %i\n", i);
	printf("Value %i\n", *zeiger);

	// Print addresses
	printf("Address %p\n", &i);
	printf("Address %p\n", zeiger);

}
