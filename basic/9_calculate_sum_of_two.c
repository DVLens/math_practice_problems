#include <stdio.h>

int main(void){
    int x, y;
    printf("Insert the first value:\n");    
    scanf("%d",&x);
    printf("Insert the second value:\n");
    scanf("%d", &y);
    printf("The sum of %d + %d is %d", x, y, x + y);
}