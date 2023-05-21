#include <stdio.h>

int main(){

    printf("%f\n", (float) 5/2);
    printf("%f\n", (float) (5/2));
    printf("%d\n", (8/5.)/2);      //?????
    printf("%lf\n", (8/5)/2.);
    printf("%d\n", (50/4)%2);
    printf("%d\n", (50%4)/2);
    printf("%d\n", 50%(4/2));
}