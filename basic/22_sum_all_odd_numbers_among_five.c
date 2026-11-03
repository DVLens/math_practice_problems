#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, sum = 0;
    printf("Sum all odd numbers among five inputs.\n"),
    printf("Type the first number: \n");
    scanf("%d", &n1);
    if((n1 % 2) != 0)
        sum += n1;
    printf("Type the second number: \n");
    scanf("%d", &n2);
    if((n2 % 2) != 0)
        sum += n2;
    printf("Type the third number: \n");
    scanf("%d", &n3);
    if((n3 % 2) != 0)
        sum += n3;
    printf("Type the fourth number: \n");
    scanf("%d", &n4);
    if((n4 % 2) != 0)
        sum += n4;
    printf("Type the fiveth number: \n");
    scanf("%d", &n5);
    if((n5 % 2) != 0)
        sum += n5;
    printf("Sum of all odd values: %d", sum);
    
}