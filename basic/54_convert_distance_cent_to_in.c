#include <stdio.h>

int main(){
    float cm;
    printf("Convert centimeters to inches.\n");
    printf("Type down the centimeters: ");
    scanf("%f", &cm);
    printf("Distance of %.2f cms is = %.2f", cm, cm*0.393701);
    return 0;
}