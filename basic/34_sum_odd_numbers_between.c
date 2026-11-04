#include <stdio.h>

int main(){
    int n1, n2, sum = 0;
    printf("Write a C program to compute the sum of the consecutive odd numbers.\n");
    printf("Type the first number.\n");
    scanf("%d", &n1);
    printf("Type the second number.\n");
    scanf("%d", &n2);

    if(n1 < n2){
        printf("List of edd numbers: ");
        for(int i = n1; i <= n2; i++){
            if((i % 2) != 0){
                printf("%d\n", i);
                sum += i;
            }
        }
        printf("%d",sum);
    }
    else {
        printf("The first number should be lesser than the second number.");
        return 0;
    }
}