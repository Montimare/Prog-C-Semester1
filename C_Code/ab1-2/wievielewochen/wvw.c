#include <stdio.h>

int main(){

    int zahl;
    printf("Bitte Anzahl der Tage eingeben: ");
    scanf("%d", &zahl);
    printf("%d Woche(n) und %d Tag(e)", zahl / 7, zahl % 7);
}