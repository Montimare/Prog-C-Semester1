#include <stdio.h>

int main(){

    int z1,z2;

    printf("Zahl1 und Zahl2: ");
    scanf("%d%d", &z1, &z2);

    //printf("%d %d\n", z1, z2);

    if (!(z2%z1))
    {
        printf("%d ist ein Teiler von %d", z1, z2);
    } else {
        printf("%d ist kein Teiler von %d", z1, z2);
    }
    
}