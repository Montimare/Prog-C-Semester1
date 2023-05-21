#include <stdio.h>    //ngrade aufsteigend gerade absteigend

int main(){

    int zahl;

    printf("gieb zahl ");
    scanf(" %d", &zahl);

    for (int i=0; i<(float)zahl/2; i++){

        printf("%d, ", i*2 +1);
    }
    printf("\n");
    while (zahl >= 0){

        if(!(zahl%2)){

            printf("%d, ", zahl);
            zahl -= 2;
        } else {

            printf("%d, ", zahl-1);
            zahl -= 2;
        }
    }
    printf("\n");
}
