#include <stdio.h>

int main(void){
    int x, y;
    printf("Type down the first value: \n");
    scanf("%d", &x);
    printf("Type down the second value: \n");
    scanf("%d",&y);
    printf("The product of both values is: %d", x * y);
}