#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	// char text1[100] = "Einigkeit und Recht und Freibier";
	char text1[100] = "Einigkeit und Recht und Klausuraufgabe";
	char text2[] = "Freiheit";
	char *pos;

	printf("Text1: %s\n", text1);

	pos = strrchr(text1, ' ');
	pos[1] = '\0';

	printf("Text1: %s\n", text1);

	strcat(text1, text2);

	printf("Text1: %s\n", text1);

}
