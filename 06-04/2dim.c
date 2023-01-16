#include <stdio.h>

int main () {

	int paare[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
	int i;

	for (i=0; i<5; i++) {
		printf("Produkt %i\n", paare[i][0] * paare[i][1]);
	}

}
