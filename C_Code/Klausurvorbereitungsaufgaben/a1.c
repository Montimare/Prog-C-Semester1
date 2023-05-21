#include "stdio.h"

int main() {

    int evens[10];
    int evensLength = 0;
    int odds[10];
    int oddsLength = 0;
    int oddsSum = 0;
    int evensSum = 0;

    for (int i = 0; i < 10; i++)
    {
        int eingabe;
        printf("gib zahl %d: ", i);
        scanf(" %d", &eingabe);
        if (eingabe %2 == 0)
        {
            evens[evensLength] = eingabe;
            evensLength++;
        } else {
            odds[oddsLength] = eingabe;
            oddsLength++;
        }
    }
    for (int i = 0; i < oddsLength; i++)
    {
        printf("%d ", odds[i]);
        oddsSum += odds[i];
    }
    printf("\n");
    for (int i = 0; i < evensLength; i++)
    {
        printf("%d ", evens[i]);
        evensSum += evens[i];
    }
    
    if (oddsSum > evensSum)
    {
        printf("Summe von odds groesser");
    } else if (oddsSum < evensSum)
    {
        printf("Summe von evens groesser");
    } else {
        printf("Summe gleich gross");
    }
    
    

}