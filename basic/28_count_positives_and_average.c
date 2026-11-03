#include <stdio.h>

int main(){
    int n = 0, d = 0;
    float sum = 0;

    printf("counts the number of positive numbers and printfs out the average values.\n");
    printf("It would be the average of five numbers.\n");
    printf("Type the first number.\n");
    scanf("%d", &n);
    if(!(n < 0)){
        sum += n;
        d++;
    }
            
    printf("Type the second number.\n");
    scanf("%d", &n);
    if(!(n < 0)){
        sum += n;
        d++;
    }
    
    printf("Type the third number.\n");
    scanf("%d", &n);
    if(!(n < 0)){
        sum += n;
        d++;
    }
    
    printf("Type the fourth number.\n");
    scanf("%d", &n);
    if(!(n < 0)){
        sum += n;
        d++;
    }
    
    printf("Type the fiveth number.\n");
    scanf("%d", &n);
    if(!(n < 0)){
        sum += n;
        d++;
    }
    if(sum > 0)
        printf("The average if the positive numbers. %.2f\n", sum / d);
    else
        printf("The numbers are less than 0\n");
}