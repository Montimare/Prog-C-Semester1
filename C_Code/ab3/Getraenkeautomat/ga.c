#include <stdio.h>

int main (){

    char auswahl;

    printf("*** Getraenke Automat *******\n* W) Wasser (0.5 Euro) *\n* B) Bionade (1 Euro) *\n* O) Orangensaft (2 Euro) *\n*****************************\n\nBitte ein Getrank auswaehlen: ");
    scanf(" %c", &auswahl);

    if (auswahl == 'w' || auswahl == 'W' || auswahl == 'b' || auswahl == 'B' || auswahl == 'o' || auswahl == 'O')
    {
        double zahlung;

        switch (auswahl)
        {
        case 'w': case 'W':
            printf("Bitte werfen Sie 0.5 Euro ein: ");
            scanf(" %lf", &zahlung);
            if(zahlung == 0.5){
                printf("Bitte entnehmen Sie Ihr Getränk");
            } else {
                printf("Bitte passend zahlen");
            }
            break;
        case 'b': case 'B':
            printf("Bitte werfen Sie 1 Euro ein: ");
            scanf(" %lf", &zahlung);
            if(zahlung == 1.0){
                printf("Bitte entnehmen Sie Ihr Getränk");
            } else {
                printf("Bitte passend zahlen");
            }
            break;
        case 'o': case 'O':
            printf("Bitte werfen Sie 2 Euro ein: ");
            scanf(" %lf", &zahlung);
            //printf("%lf", zahlung);
            if(zahlung == 2){
                printf("Bitte entnehmen Sie Ihr Getränk");
            } else {
                printf("Bitte passend zahlen");
            }
            break;
        default:
            break;
        }


    } else {
        printf("Ungültige Eingabe!");
    }
    return 0;
}