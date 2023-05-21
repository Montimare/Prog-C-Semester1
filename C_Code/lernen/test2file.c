#include "stdio.h"
#include "stdlib.h"

void ausgabe(int *b, int length){
    
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", b[i]);
    }
    

}

void populateArray(int *array1, int length){
    for (int i = 0; i < length; i++)
    {
        printf("Element %d: ", i);
        scanf(" %d", &array1[i]);
    }
}

int *arrayMaker(){
    int length;
    printf("gib array länge ");
    scanf("%d", &length);
    int *array1 = malloc(length * sizeof(int));
    populateArray(array1, length);
    ausgabe(array1, length);
}

int main () {
    arrayMaker();
}