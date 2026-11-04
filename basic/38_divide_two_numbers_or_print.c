#include <stdio.h>
int main(){
    float x, y;
    printf("Divide two numbers, evaluate if the divisor is 0.\n");
    printf("Type the first number: ");
    scanf("%f", &x);
    printf("Type the second number: ");
    scanf("%f", &y);

    if(y == 0){
        printf("Division is not possible.\n");
        return 1;
    }

    printf("The output is: %.1f", x / y);
}