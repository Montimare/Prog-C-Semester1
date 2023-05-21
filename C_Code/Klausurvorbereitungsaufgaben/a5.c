#include "stdio.h"

int quersumme(int zahl){

    int ergebnis = 0;

    while (zahl > 0)
    {
        ergebnis += zahl %10;
        zahl = zahl / 10;
    }
    
    return ergebnis;
}

int main() {
    int zahl;
    printf("gib zahl: ");
    scanf(" %d", &zahl);

    printf ("%d", zahl);
    while (zahl >= 10)
    {
        zahl = quersumme(zahl);
        printf(" -> ");
        printf("%d", zahl);
        
    }
    
    
}