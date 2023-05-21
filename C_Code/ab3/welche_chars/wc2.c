#include <stdio.h>
#include <ctype.h>

int main(){

    char eingabe;

    printf("Bitte ein Zeichen eingeben: ");
    scanf(" %c", &eingabe);
    printf("DEBUG: %c\n",eingabe);

    if (isdigit(eingabe)) //123
    {
        printf("%c ist eine Zahl", eingabe); 
    } else if (isupper(eingabe)) //A
    {
        printf("%c ist ein Grossbuchstabe", eingabe); 
    } else if (islower(eingabe)) //a
    {
        printf("%c ist ein Kleinbuchstabe.", eingabe);
    } else if (ispunct(eingabe)) //good enough
    { 
        printf("%c ist ein Sonderzeichen.", eingabe);
    } else 
    {
        printf("%c nicht supported", eingabe);
    }
            
    return 0;
}