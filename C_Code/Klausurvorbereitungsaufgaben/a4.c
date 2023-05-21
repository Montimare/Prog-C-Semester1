#include "stdio.h"
#include "stdlib.h"

int main()
{
    int d1, d2, d3;
    printf("gib d1: ");
    scanf(" %d", &d1);
    printf("gib d2: ");
    scanf(" %d", &d2);

    double *array1 = malloc(d1 * sizeof(double));
    double *array2 = malloc(d2 * sizeof(double));

    for (int i = 0; i < d1; i++)
    {
        double eingabe;
        printf("Element %d: ", i);
        scanf(" %lf", &eingabe);
        array1[i] = eingabe;
    }

    for (int i = 0; i < d2; i++)
    {
        double eingabe;
        printf("Element %d: ", i);
        scanf(" %lf", &eingabe);
        array2[i] = eingabe;
    }

    if (d1 <= d2)
    {
        d3 = d2;
    } else if (d1 > d2)
    {
        d3 = d1;
    }

    double *arrayResult = malloc(d3 * sizeof(double));
    
    for (int i = 0; i < d3; i++)
    {
        if (d1 <= d3 || d2 <= d3){
            arrayResult[i] = array1[i] + array2[i];
        } else if (d1 >= d2) {
            arrayResult[i] = array1[i];
        } else {
            arrayResult[i] = array2[i];
        }
    }
    


    for (int i = 0; i < d3; i++)
    {
        printf("%lf ", arrayResult[i]);
    }
    free(array1);
    free(array2);
    free(arrayResult);
    return 0;
}