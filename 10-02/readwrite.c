#include <stdio.h>

int main() {

	FILE *fp;
	int iout[7] = { 5,6,7,8,9,10,11 };
	int iin[5] = { 0 };
	int i;

	fp = fopen("zahlen", "w");

	if (fp == NULL) {
		printf("Error opening zahlen for writing\n");
		return 1;
	} else {
		printf("Opening zahlen for writing\n");
		for (i=0; i<7; i++) {
			fprintf(fp, "%i\n", iout[i]);
		}
		fclose(fp);
	}

	fp = fopen("zahlen", "r");

	if (fp == NULL) {
		printf("Error opening zahlen for reading\n");
		return 1;
	} else {
		printf("Opening zahlen for reading\n");
		i = 0;
		while ( (fscanf(fp, "%i", &iin[i]) != EOF) && i<5) {
			i++;
		}
		fclose(fp);
		for (i=0; i<5; i++) {
			printf("%i\n", iin[i]);
		}
	}

	return 0;
}
