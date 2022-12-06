#include <stdio.h>

int main(){
    int zahl;

    printf("\nGib bitte eine Punktzahl bis 10 ein: ");
    scanf("%d", &zahl);

    if(zahl == 10){
        printf("\nsehr gut");
    }else if(zahl == 9){
        printf("\ngut");
    }else if(zahl == 8){
        printf("\nbefriedigend");
    }else if(zahl == 7){
        printf("\nausreichend");
    }else if(zahl == 6){
        printf("\nmangelhaft");
    }else if(zahl < 6){
        printf("\nungenügend");
    }else{
        printf("\nFehler!");
    }

    return 0;
}
