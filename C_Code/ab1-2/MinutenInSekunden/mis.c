#include <stdio.h>

int main(){
    int min;
    int sec;
    int sectotal;
    printf("Min & Sec: ");
    scanf("%d%d", &min, &sec);
    sectotal = (min * 60) + sec;
    printf("%d Minuten und %d Sekunden sind %d Sekunden.", min, sec, sectotal);
}