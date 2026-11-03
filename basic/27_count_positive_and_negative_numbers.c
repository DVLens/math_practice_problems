#include <stdio.h>

int main(){
    int n, pos = 0, neg = 0;

    printf("Counter of positive and negative numbers.\n");
    printf("Type the first number: \n");
    scanf("%d", &n);
    if(n < 0){
        neg++;
    } else {
        pos++;
    }
    printf("Type the second number: \n");
    scanf("%d", &n);
    if(n < 0){
        neg++;
    } else {
        pos++;
    }
    printf("Type the third number: \n");
    scanf("%d", &n);
    if(n < 0){
        neg++;
    } else {
        pos++;
    }
    printf("Type the fourth number: \n");
    scanf("%d", &n);
    if(n < 0){
        neg++;
    } else {
        pos++;
    }
    printf("Type the fiveth number: \n");
    scanf("%d", &n);
    if(n < 0){
        neg++;
    } else {
        pos++;
    }
    printf("Number of positive numbers: %d\n", pos);
    printf("Number of negative numbers: %d\n", neg);
}