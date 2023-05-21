#include "stdio.h"

int fibonacci(int zahl){
    if (zahl == 1 || zahl == 2){
        return 1;
    } else {
        int ergebnis;
        ergebnis = fibonacci(zahl - 1) + fibonacci(zahl - 2);
        //printf("%d ", ergebnis);
        return ergebnis;
    }

}

int main(){
    
    for (int i = 1; i <= 50; i++)
    {
        printf("%d ", fibonacci(i));
    }
    

    //printf ("\n%d", fibonacci(5));
}