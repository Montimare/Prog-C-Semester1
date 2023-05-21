#include <stdio.h>

int main (){

    char auswahl;

    printf("Abbrechen mit X\n*** Getraenke Automat *******\n* W) Wasser (0.5 Euro) *\n* B) Bionade (1 Euro) *\n* O) Orangensaft (2 Euro) *\n*****************************\n\nBitte ein Getrank auswaehlen: ");
    scanf(" %c", &auswahl);

    if (auswahl == 'w' || auswahl == 'W' || auswahl == 'b' || auswahl == 'B' || auswahl == 'o' || auswahl == 'O' || auswahl == 'x' || auswahl == 'X')
    {
        double zahlung;

        switch (auswahl)
        {
        case 'w': case 'W':
            do {
            printf("Bitte werfen Sie 0.5 Euro ein: ");
            scanf(" %lf", &zahlung);
            if(zahlung == 0.5){
                printf("Bitte entnehmen Sie Ihr Getränk");
                break;
            } else if (zahlung == 0)
            {
                printf("Vorgang abgebrochen");
                break;
            } else {
                printf("Bitte passend zahlen\n");
            }
            } while (1);
            break;
        case 'b': case 'B':
            do{
            printf("Bitte werfen Sie 1 Euro ein: ");
            scanf(" %lf", &zahlung);
            if(zahlung == 1.0){
                printf("Bitte entnehmen Sie Ihr Getränk");
                break;
            } else if (zahlung == 0)
            {
                printf("Vorgang abgebrochen");
                break;
            } else {
                printf("Bitte passend zahlen\n");
            }
            } while (1);
            break;
        case 'o': case 'O':
            do
            {
            printf("Bitte werfen Sie 2 Euro ein: ");
            scanf(" %lf", &zahlung);
            //printf("%lf", zahlung);
            if(zahlung == 2){
                printf("Bitte entnehmen Sie Ihr Getränk");
                break;
            } else if (zahlung == 0)
            {
                printf("Vorgang abgebrochen");
                break;
            } else {
                printf("Bitte passend zahlen\n");
            }
            } while (1);
            break;
        default:
            printf("Vorgang abgebrochen");
            break;
        }


    } else {
        printf("Ungültige Eingabe!");
    }
    return 0;
}