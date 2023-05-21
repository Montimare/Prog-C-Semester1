#include <stdio.h>
#include <math.h>

int main()
{
    double radius;
    double hoehe;
    printf("radius & hoehe: ");
    scanf("%lf%lf", &radius, &hoehe);
    printf("debug: %lf %lf \n", radius, hoehe);
    printf("Volumen: %.3lf", pow(hoehe, 2) * radius * M_1_PI);

    return 0;
}
