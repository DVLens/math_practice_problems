#include <stdio.h>

int main(){
    int n1, n2;
    printf("Program to check if wether values are multiplied or not.\n");
    printf("Type the first number:\n");
    scanf("%d", &n1);
    printf("Type the second number:\n");
    scanf("%d", &n2);
    if((n1 % n2) == 0 || (n2 % n1) == 0){
        printf("Multiplied\n");
    }
    else {
        printf("Not multiplied");
    }
    return 0;
}