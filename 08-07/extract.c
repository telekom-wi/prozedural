#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char csv[] = "Paris 111,Berlin 6,London 16,Rom 28";
	char *pos;
	int num,sum = 0;

	printf("CSV:  %s\n", csv);

	pos = strtok(csv, ",");

	while (pos != NULL) {
		printf("Part: %s\n", pos);
		num = atoi(strrchr(pos, ' '));
		printf("Num:  %i\n", num);
		sum = sum + num;
		pos = strtok(NULL, ",");
	}

	printf("Sum:  %i\n", sum);

}
