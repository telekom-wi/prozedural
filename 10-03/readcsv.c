#include <stdio.h>

int main() {

	FILE *fp;
	char datum[10];
	char uhr[10];
	char name[10];
	int i;


	fp = fopen("890260_log.csv", "r");

	if (fp == NULL) {
		printf("Error opening 890260_log.csv for reading\n");
		return 1;
	} else {
		printf("Opening 890260_log.csv for reading\n");
		i = 0;
		while (fscanf(fp, "%10s,%5s,%s", &datum, &uhr, &name) != EOF) {
			printf("Datum: %s\tUhrzeit: %s\tUser: %s\n", datum, uhr, name);
		}
		fclose(fp);
	}

	return 0;
}
