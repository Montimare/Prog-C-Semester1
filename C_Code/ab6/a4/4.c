#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    // WICHTIG GUCK DIR DEN SCHEIß VOR DER PRÜFUNG NOCHMAL AN
    char A[256], B[256];
    printf("Bitte gib ein Satz ein: ");
    fgets(A, 256, stdin);
    int A_length = strlen(A);

    //printf(A);                  //
    //printf("%d\n", A_length);   //
    //A[A_length -1] = "";

    A[A_length-1] = '\0';
    A_length--;
    printf("%d\n", strlen(A));   //

    for (int i = 0; i < A_length; i++)
    {
        B[i] = A[A_length - (i + 1)];
    }
    B[A_length] = '\0';

    printf("Array A: %s\nArray B: %s", A, B);   //

    // WICHTIG GUCK DIR DEN SCHEIß VOR DER PRÜFUNG NOCHMAL AN
    for (int i = 0; i < strlen(A); i++)
    {
        if (islower(A[i]))
        {
            A[i] = toupper(A[i]);
        } 
    }
    for (int i = 0; i < strlen(B); i++)
    {
        if (islower(B[i]))
        {
            B[i] = toupper(B[i]);
        }
    }
    

    if (strcmp(A, B) == 0)
    {
        printf("\n§!$!§");
    }
    printf("\n%d",strcmp(A, B));        //

    /*
    Problem ist das dumme enter beid er eingabe, possible fixes:
        - enter löschen, aber wie?
        - enter nicht umdrehen in der umdrehschleife
    Frage: beim umdrehen was passiert mit dem \0 terminator
        - ist der aufeinmal am anfang dann?
        - was wenn das neue array werte zugewiesen bekommt, wird der dann automatisch erzeugt?    
    */

    return 0;
}