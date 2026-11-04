#include <stdio.h>

int main() {
    int n = 0;
    float sum = 0;

    printf("Write a C program that read 5 numbers and sum of all odd values between them. \n");
    printf("Type the first number.\n");
    scanf("%d", &n);
    if((n % 2) != 0){
        sum += n;        
    }
            
    printf("Type the second number.\n");
    scanf("%d", &n);
    if((n % 2) != 0){
        sum += n;        
    }
    
    printf("Type the third number.\n");
    scanf("%d", &n);
    if((n % 2) != 0){
        sum += n;        
    }
    
    printf("Type the fourth number.\n");    
    scanf("%d", &n);
    if((n % 2) != 0){
        sum += n;        
    }
    
    printf("Type the fiveth number.\n");
    scanf("%d", &n);
    if((n % 2) != 0){
        sum += n;        
    }

    if(sum > 0)
        printf("The average if the positive numbers. %.2f\n", sum);
    else
        printf("The numbers are less than 0\n");
}