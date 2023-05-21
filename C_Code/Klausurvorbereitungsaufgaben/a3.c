#include "stdio.h"
#include "string.h"

int main(){

    char array1[255] = {0};

    printf("gib string");
    fgets(array1, 255, stdin);
    fputs(array1, stdout);

    int kleinBuchstaben = 0;
    int grossBuchstaben = 0;
    int zeichen = 0;
    int sonstige = 0;

    for (int i = 0; i < strlen(array1); i++)
    {
        if (array1[i] >= 'a' && array1[i] <= 'z')
        {
            kleinBuchstaben++;
        } else if (array1[i] >= 'A' && array1[i] <= 'Z')
        {
            grossBuchstaben++;
        } else if (array1[i] >= '0' && array1[i] <= '9')
        {
            zeichen++;
        } else {
            sonstige++;
        } 
    }
    printf("klein: %d, gross: %d, ziffer: %d, sonstige: %d", kleinBuchstaben, grossBuchstaben, zeichen, sonstige);
    



    return 0;
}