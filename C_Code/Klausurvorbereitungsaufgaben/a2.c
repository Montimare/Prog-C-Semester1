#include "stdio.h"
#include "string.h"

int string_compare(char *s1, char *s2)
{
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] -= 32;
        }
        // fputs(s1, stdout);
        // printf("\n");
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        if (s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] -= 32;
        }
        // fputs(s2, stdout);
        // printf("\n");
    }

    if (strlen(s1) == strlen(s2))
    {
        for (int i = 0; i < strlen(s1); i++)
        {
            if (s1[i] != s2[i])
            {
                break;
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    char array1[255] = {0};
    char array2[255];
    int mir = 1;
    int egal = 1;
    int zaehl = 0;

    printf("KEINE LEERZEICHEN, benutz stattdessen _, da die funktion fgets nicht erlaubt!\n");
    printf("Gib String1: ");
    scanf("%s", array1);

    printf("Gib String2: ");
    scanf("%s", array2);

    printf("%d", string_compare(array1, array2));

    return 0;
}