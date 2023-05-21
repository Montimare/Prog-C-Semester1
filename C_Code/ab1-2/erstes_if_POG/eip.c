#include <stdio.h>

int main() {

    char z1, z2;

    printf("Bitte das erste Zeichen eingeben: \n");
    scanf("%c", &z1);
    printf("Bitte das zweite Zeichen eingeben: \n");
    scanf("%c", &z2);

    printf("%c DEBUG\n", z2);

    if (z1 < z2) {
        printf("In der ASCII-Tabelle kommt %c vor %c.\n", z1, z2);
    }

    return(0);
}