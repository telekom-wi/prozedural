#include <stdio.h>

int main () {

	int array_int[10] = { 0,1,2,3,4,5,6,7,8,9 };
	float array_float[10] = { 0.0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9 };
	int i,j;
	int *pos_int;
	float *pos_float;

	// Init pointer
	pos_int = array_int;
	pos_float = &array_float[0];

	printf("\n");
	for (i=0; i<10; i++) {
		printf("Integer[%i] \t %i\n", i, *pos_int);
		pos_int++;
		
	}
	printf("\n");

	for (i=0; i<10; i++) {
		printf("Float[%i] \t %.2f\n", i, *pos_float);
		pos_float++;
	}
	printf("\n");

}
