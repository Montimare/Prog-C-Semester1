#include "stdio.h"
#include "stdlib.h"

int main(){

    int zeile = 15, spalte = 50;
    int counter = 0;

    int *a[zeile];
    for (int i = 0; i < zeile; i++)
    {
        a[i] = malloc(spalte * sizeof(int));
    }
    
    for (int i = 0; i < zeile; i++)
    {
        for (int j = 0; j < spalte; j++)
        {
            a[i][j] = counter++;
        }
        
    }
    
    for (int i = 0; i < zeile; i++)
    {
        for (int j = 0; j < spalte; j++)
        {
            printf ("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}