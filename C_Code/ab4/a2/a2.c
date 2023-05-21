#include <stdio.h>

int main(){

    char M1[4] = {'a', 'b', 'c', 'd'};
    char M2[5] = {1,2,3,4,5};

    for (int i = 0; i < sizeof(M1); i++)
    {
        for (int j = 0; j < sizeof(M2); j++)
        {
            printf("(%c, %d)  ", M1[i], M2[j]);
        }
        printf("\n");
    }
}