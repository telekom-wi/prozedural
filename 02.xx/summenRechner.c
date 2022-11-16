#include <stdio.h>

int main(){
        float z1, z2, ergebnis;

        printf("\nGeben Sie die erste Zahl ein: ");
        scanf("%f", &z1);
        printf("Geben Sie die zweite Zahl ein: ");
        scanf("%f", &z2);
  
        ergebnis = z1 + z2;
        printf("\nDas Ergebnis beträgt: %f\n\n", ergebnis);
  
        return 0;
}
