#include <stdio.h>

int main(){
        int tage;
        printf("\nGeben Sie die Anzahl an Tagen an: ");
        scanf("%d", &tage);
        printf("\nDie Anzahl an Stunden beträgt: %d h\nDie Anzahl an Minuten beträgt: %d min\nDie Anzahl an Sekunden beträgt: %d s\n\n", tage*24, tage*24*60, tage*24*60*60);
        return 0;
}