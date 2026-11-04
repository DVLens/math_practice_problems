#include <stdio.h>

int main(){
    int sum = 0, ini, fin;
    printf("Sum all the numbers between two integers, excluding multiples of 17.\n");
    printf("Type the first number: ");
    scanf("%d", &ini);
    printf("Type the second number: ");
    scanf("%d", &fin);
    for(int i = ini; i <= fin; i++){
        if(i % 17 != 0){
            sum += i;
        }
    }
    printf("Sum: %d", sum);
}