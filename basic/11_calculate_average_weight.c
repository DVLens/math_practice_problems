#include <stdio.h>

int main(void){
    int i1, i2;
    float w1, w2;    
    printf("Program to print the weight and number of purchases");
    printf("Type down the weight of Item 1: ");
    scanf("%f", &w1);
    printf("Type down the number purchases 1: ");
    scanf("%d", &i1);
    printf("Type down the weight of Item 2: ");
    scanf("%f", &w2);
    printf("Type down the number purchases 2: ");
    scanf("%d", &i2);

    printf("Average value: %f", ((w1 * i1) + (w2 * i2)) / (i1 + i2));

}