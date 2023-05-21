#include <stdio.h>

int main()
{

    // char m1[];
    int m1_length = 4;
    // char m2[];
    int m2_length = 5;
    char anfangsbuchstabe;
    char endbuchstabe;
    int anfangszahl;
    int endzahl;
    char bestimmen;

    printf("möchtest du buchstaben bestimmen?: ");
    scanf(" %c", &bestimmen);
    if (bestimmen != '0' && bestimmen != 'n' && bestimmen != 'N')
    {
        do
        {
            do
            {
                printf("Anfangsbuchstabe eingeben: ");
                scanf(" %c", &anfangsbuchstabe);
            } while (!(anfangsbuchstabe >= 'a' && anfangsbuchstabe <= 'z' || anfangsbuchstabe >= 'A' && anfangsbuchstabe <= 'Z'));
            do
            {
                printf("Endbuchstabe eingeben: ");
                scanf(" %c", &endbuchstabe);
            } while (!(endbuchstabe >= 'a' && endbuchstabe <= 'z' || endbuchstabe >= 'A' && endbuchstabe <= 'Z'));
            m1_length = endbuchstabe - anfangsbuchstabe +1;
            bestimmen = 0;
        } while (m1_length < 1);
    }
    printf("möchtest du zahlen bestimmen?: ");
    scanf(" %c", &bestimmen);
    if (bestimmen != '0' && bestimmen != 'n' && bestimmen != 'N')
    {
        do
        {
            do
            {
                printf("Anfangszahl eingeben: ");
                scanf(" %d", &anfangszahl);
            } while (!(anfangszahl >= 0 && anfangszahl <= 999999));
            do
            {
                printf("Endzahl eingeben: ");
                scanf(" %d", &endzahl);
            } while (!(endzahl >= 0 && endzahl <= 999999));
            m2_length = endzahl - anfangszahl +1;
        } while (m2_length < 1);
    }

    char m1[m1_length];
    int m2[m2_length];

    if (anfangsbuchstabe)
    {
        for (int i = 0; i < m1_length; i++)
        {
            m1[i] = anfangsbuchstabe + i;
        }
    }else{
        m1_length = 4;
        m1[0] = 'A';
        m1[1] = 'B';
        m1[2] = 'C';
        m1[3] = 'D';
    }
    if (endzahl)
    {
        for (int i = 0; i < m2_length; i++)
        {
            m2[i] = anfangszahl + i;
            //printf("DEBUG %d", anfangszahl + i);
        }
    }
    else
    {
        m2_length = 5;
        m1[0] = 1;
        m1[1] = 2;
        m1[2] = 3;
        m1[3] = 4;
        m1[4] = 5;
    }

    for (int i = 0; i < m1_length; i++)
    {
        for (int j = 0; j < m2_length; j++)
        {
            printf("(%c, %d)  ", m1[i], m2[j]);
        }
        printf("\n");
    }
}