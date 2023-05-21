#include <ctype.h>
#include <stdio.h>

int main(){

    char eingabe;

    printf("Bitte einen Grossbuchstaben eingeben: ");
    scanf(" %c", &eingabe);

    if (isupper(eingabe))
    {
        char alphabet[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        int found = 0;
        
        printf("Grossbuchstaben, die nach %c kommen: ", eingabe);

        for (int i = 0; i < sizeof(alphabet); i++)
        {
            if (found)
            {
                printf("%c ",alphabet[i]);
            }
            
            if (eingabe == alphabet[i])
            {
                found = 1;
            }
        }
               
    } else {
        printf("%c ist kein Großbuchstabe.", eingabe);
    }
    
}