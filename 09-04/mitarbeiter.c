#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct maStruct {
	int number;
	char *name;
};

int main() {

	struct maStruct ma[] = { {1,"Schmidt"}, {2,"Meier"}, {3,"Adams"}, {4,"Walter"} };
	struct maStruct *ma_ptr = ma;
	int i;

	for (i=0; i<4; i++) {
		printf("Name %s\t Nummer %i\n", ma[i].name, ma[i].number);
	}

	return 0;
}
