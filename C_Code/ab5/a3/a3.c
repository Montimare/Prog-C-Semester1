#include <stdio.h>

int breite;

int schlefe(int abc)
{
    if (abc > 0)
    {
        for (int i = 0; i < (float)abc / 2 - 1; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < (breite - abc + 1); i++)
        {
            printf("*");
        }
        printf("\n");
        return schlefe(abc - 2);
    }
}

int main()
{

    int eingabe_gueltig;

    printf("Max. Breite des Dreiecks: ");
    eingabe_gueltig = scanf(" %d", &breite);
    if (!eingabe_gueltig)
    {
        printf("Auf Wiedersehen!\n");
        return 0;
    }

    schlefe(breite);

    return 0;
}