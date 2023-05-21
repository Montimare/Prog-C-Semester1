#include <stdio.h>

int main()
{

    int eingabe_gueltig, zahl_r, temp;
    int eingabe = 0;

    do
    {
        printf("Bitte eine Zahl eingeben: ");
        eingabe_gueltig = scanf("%d", &eingabe);

        if (!eingabe_gueltig)
        {
            printf("Auf Wiedersehen!\n");
            break;
        }

        temp = eingabe;

        while (eingabe != 0)
        {
            zahl_r = (zahl_r * 10) + (eingabe % 10);
            eingabe /= 10;
            printf("%d\n", zahl_r);
        }

        if (temp == zahl_r)
        {
            printf("%d ist ein Zahlenpalindrom.\n", temp);
        }
        else
        {
            printf("%d ist kein Zahlenpalindrom.\n", temp);
        }

        eingabe_gueltig=0, zahl_r=0, temp = 0;
    } while (1);

    return 0;
}
