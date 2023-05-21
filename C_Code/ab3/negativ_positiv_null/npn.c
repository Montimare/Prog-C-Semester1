#include <stdio.h>

int main(){

    int zahl;

    printf("Zahl: ");
    scanf(" %d", &zahl);

//printf("%d\n", zahl);

    if (zahl < 0)
    {
        printf("%d ist eine negative Zahl.", zahl);
    } else {
        if (zahl > 0)
        {
            printf("%d ist eine positive Zahl.", zahl);
        } else {
            //if (zahl == 0)
            {
                printf("%d ist eine Null.", zahl);
            }
            
        }

    }
    
}