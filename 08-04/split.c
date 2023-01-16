#include <stdio.h>
#include <string.h>

int main() {

	char fName[] = "/home/cfrank/FOM/Testfile.jpeg";
	char *pos;

	printf("Full path: %s\n", fName);

	pos = strrchr(fName, '.');
	if (pos != NULL) {
		printf("File Type: %s\n", pos+1);
	}
	pos[0] = '\0';
	
	pos = strrchr(fName, '/');
	if (pos != NULL) {
		printf("File Name: %s\n", pos+1);
	}
	pos[0] = '\0';
	
	printf("Directory: %s\n", fName);

}
