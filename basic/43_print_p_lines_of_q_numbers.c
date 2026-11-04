#include <stdio.h>

int main(){
    int a, b, seq;
    printf("This program reads two integers p and q to print p number of lines.\n");    
    printf("Type the first number:\n");
    scanf("%d",&a);    
    printf("Type the second number:\n");
    scanf("%d",&b);    
    seq = 1;
    for (int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("%d ", seq);
            seq++;
        }
        printf("\n");        
    }
}