#include <stdio.h>

int main(void){
    float distance, fuel;    
    printf("Type down the distance in km:\n");
    scanf("%f", &distance);
    printf("Type down the fuel spent:\n");
    scanf("%f", &fuel);
    printf("Average consumption (km/lt): %.3f ", (distance / fuel));
}