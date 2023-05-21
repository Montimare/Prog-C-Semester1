#include <stdio.h>

int main(){

    char eingabe;

    printf("Bitte ein Zeichen eingeben: ");
    scanf(" %c", &eingabe);

    if (eingabe >= 48 && eingabe <= 57) //123
    {
        printf("%c ist eine Zahl", eingabe); 
    } else {
        if (eingabe >= 65 && eingabe <= 90) //A
        {
            printf("%c ist ein Grossbuchstabe", eingabe); 
        } else {
            if (eingabe >= 97 && eingabe <= 122) //a
            {
                printf("%c ist ein Kleinbuchstabe.", eingabe);
            } else { //good enough
                printf("%c ist ein Sonderzeichen.", eingabe);
            }
            
        }
        
    }
    
}