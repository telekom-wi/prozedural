#include <stdio.h>

int main(){
    float z1, z2, z3;

    printf("\nGib drei unterschiedliche Zahlen ein\n");
    printf("\nGib die erste Zahl ein: ");
    scanf("%f", &z1);
    printf("\nGib die zweite Zahl ein: ");
    scanf("%f", &z2);
    printf("\nGib die dritte Zahl ein: ");
    scanf("%f", &z3);

    if(z1 < z2 && z1 < z3){
        printf("\n%f", z1);
    }else if(z2 < z1 && z2 < z3){
        printf("\n%f", z2);
    }else if(z3 < z1 && z3 < z2){
        printf("\n%f", z3);
    }else{
        printf("\nZahlen sind nicht unterschiedlich!");
    }

    return 0;
}
