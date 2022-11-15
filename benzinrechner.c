#include <stdio.h>

int main(){
        printf("\n-----Wilkommen zum Benzinrechner-----");
        float verbrauch, strecke;

        printf("\nBitte geben Sie den Verbrauch in Liter an: ");
        scanf("%f", &verbrauch);
        printf("Bitte geben Sie die gefahrene Strecke an: ");
        scanf("%f", &strecke);

        printf("\nDer Verbrauch liegt bei: %f l/km\n\n", verbrauch/strecke*100);

        return 0;
}
