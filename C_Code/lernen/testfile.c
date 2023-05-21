#include "stdio.h"

void ausgabe(int *b){
    printf("%d\n", b[2]);

}

int main () {
    int a[] = {1,2,3,4};
    int *b = a;
    ausgabe(b);
}