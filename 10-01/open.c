#include <stdio.h>

int main() {

	FILE *fp;

	fp = fopen("testfile", "w");

	if (fp == NULL) {
		printf("Error opening testfile\n");
	} else {
		printf("File successfully opened\n");
		fclose(fp);
	}

	return 0;
}
