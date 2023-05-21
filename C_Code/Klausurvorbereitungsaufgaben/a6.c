#include "stdio.h"

int collatz(int zahl){
    if (zahl > 1)
    {
        if (zahl %2 == 0)
        {
            zahl /= 2;
        } else {
            zahl = zahl *3 +1;
        }
        return zahl;
    }
    return 0;    
}

int main(){

    int zahl = 0;
    printf("gib zahl: ");
    scanf(" %d", &zahl);

    printf("%d ", zahl);
    while (zahl > 1)
    {
        zahl = collatz(zahl);
        printf("%d ", zahl);
    }
    
}