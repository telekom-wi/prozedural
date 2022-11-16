#include <stdio.h>

int main(){
        const float PI = 3.14;
        float radius;

        printf("\nGeben sie bitte den Radius in cm an: ");
        scanf("%f", &radius);

        printf("\nDer Kreis hat ein Flächeninhalt von %f cm2\n\n", radius*radius*PI);

        return 0;
}
