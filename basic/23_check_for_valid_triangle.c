#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("Valid triangle program.\n");
    printf("Type the first number:\n");
    scanf("%f", &n1);
    if(n1 <= 0){
        printf("Not valid number\n");
        return 1;
    }
        
    printf("Type the second number:\n");
    scanf("%f", &n2);
    if(n2 <= 0){
        printf("Not valid number\n");
        return 1;
    }

    printf("Type the third number:\n");
    scanf("%f", &n3);
    if(n3 <= 0){
        printf("Not valid number\n");
        return 1;
    }

    printf("Perimeter = %f", n1 + n2 +n3);
    return 0;
}