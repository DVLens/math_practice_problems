#include <stdio.h>

int main(){
    int max = -0x7fffffff, n = -0x7fffffff, p = 0;
    printf("Write a program that accepts some integers from the user and finds the highest value and the input position.\n");
    printf("Type first number: \n");
    scanf("%d", &n);
    if(n > max){
        max = n;
        p = 1;
    }
    printf("Type second number: \n");
    scanf("%d", &n);
    if(n > max){
        max = n;
        p = 2;
    }
    printf("Type third number: \n");
    scanf("%d", &n);
    if(n > max){
        max = n;
        p = 3;
    }
    printf("Type fourth number: \n");
    scanf("%d", &n);
    if(n > max){
        max = n;
        p = 4;
    }
    printf("Type fiveth number: \n");
    scanf("%d", &n);
    if(n > max){
        max = n;
        p = 5;
    }
    printf("Highest value: %d", max);
    printf("Position: %d", p);
    return 0;
}