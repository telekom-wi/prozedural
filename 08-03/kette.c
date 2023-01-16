#include <stdio.h>
#include <string.h>

int main() {

	char *vName[5] = {"Juergen", "Lucien", "Thomas", "Pep", "Bruno"};
	char *nName[5] = {"Klopp", "Favre", "Gardiola", "Labbadia", "Tuchel"};

	char ausgabe[81];

	int i, j, underline;

	for (i=0; i<5; i++) {
		
		// Vornamen kopieren
		strcpy(ausgabe,vName[i]);

		// Unterstriche einfuegen
		underline = 80 - strlen(vName[i]) - strlen(nName[i]);
		for (j=0; j<underline; j++) {
			strcat(ausgabe, "-");
		}

		// Nachname kopieren
		strcat(ausgabe, nName[i]);

	printf("%s\n", ausgabe);

	}

}
