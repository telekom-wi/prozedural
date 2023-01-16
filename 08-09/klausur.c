#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char text[100] = "15.06.2012#08:15:00#Zahnarzttermin#privat";
	char *ptr;

	ptr = strtok(text, "#");
	if (ptr != NULL) printf("Datum:   %s\n", ptr);

	ptr = strtok(NULL, "#");
	if (ptr != NULL) printf("Uhrzeit: %.5s\n", ptr);

	ptr = strtok(NULL, "#");
	if (ptr != NULL) printf("Termin:  %s\n", ptr);

	ptr = strtok(NULL, "#");
	if (ptr != NULL) printf("Art:     %s\n", ptr);

}
