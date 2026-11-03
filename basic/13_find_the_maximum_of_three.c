#include <stdio.h>

int main(void){
    int v1, v2, v3, max;
    printf("Type down the first integer:");
    scanf("%d", &v1);
    printf("Type down the second integer:");
    scanf("%d", &v2);
    printf("Type down the third integer:");
    scanf("%d", &v3);

    if(v1 >= v2 && v1 >= v3) 
        max = v1;
    else if(v2 > v1 && v2 >= v3)
        max = v2;
    else 
        max = v3;

    printf("The maximum of the three is: %d", max);
}