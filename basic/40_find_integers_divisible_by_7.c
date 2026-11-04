#include <stdio.h>

int main(){
    int x, y;
    printf("This program will list all the values divisible by 7 with a remainder of 2 or 3.\n");
    printf("Type the first number: ");
    scanf("%d",&x);
    printf("Type the second number: ");
    scanf("%d",&y);    
    for(int i = x; i < y; i++){
        if((i % 7 == 3) || (i % 7 == 2)){
            printf("%d\n",i);
        }
    }
}