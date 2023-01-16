#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	FILE *fp;
	char line[100];
	int i;


	fp = fopen("890260_log.csv", "r");

	if (fp == NULL) {
		printf("Error opening 890260_log.csv for reading\n");
		return 1;
	} else {
		/* printf("Opening 890260_log.csv for reading\n"); */
		i = 0;
		while (fgets(line, sizeof(line), fp)) {
			/* printf("Raw: %s", line); */
			printf("Datum: %s\n", strtok(line,","));
			printf("Uhrzeit: %s\n", strtok(NULL,","));
			printf("User: %s", strtok(NULL,","));
			/* printf("Rest: %s\n", strtok(NULL,",")); */
			printf("----------------------\n");
		}
		fclose(fp);
	}

	return 0;
}
