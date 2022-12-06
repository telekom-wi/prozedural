#include <stdio.h>

int main(){
    int alter;

    printf("\nGib bitte dein Alter ein: ");
    scanf("%d", &alter);

    if(alter >= 0 && alter < 18){
        printf("\nDu bist ein Kind/Jugendlicher.");
    }else if(alter >= 18 && alter < 67){
        printf("\nDu bist ein Erwachsener.");
    }else if(alter >= 67){
        printf("\nDu bist ein Rentner.");
    }else{
        printf("\nFehler!");
    }

    return 0;
}
