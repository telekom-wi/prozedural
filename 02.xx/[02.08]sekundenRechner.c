#include <stdio.h>

int main(){
        int iSekunden;

        printf("\nBitte geben Sie die Anzahl an Sekunden an: ");
        scanf("%d", &iSekunden);

        printf("\nDie Anzahl an Tagen beträgt: %d d\nDie Anzahl an Stunden beträgt: %d h\nDie Anzahl an Minuten beträgt: %d min\nDie Anzahl an Sekunden beträgt: %d s\n\n",iSekunden/60/60/24, iSekunden/60/60%24, iSekunden/60%60, iSekunden%60);

        return 0;
}