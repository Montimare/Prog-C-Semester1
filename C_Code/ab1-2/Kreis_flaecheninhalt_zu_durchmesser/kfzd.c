#include <stdio.h>
#include <math.h>

int main(){

    double flaecheninhalt;

    printf("Flaecheninhalt: ");
    scanf("%lf", &flaecheninhalt);
    printf("%lf", sqrt(flaecheninhalt / M_1_PI) * 2);

}