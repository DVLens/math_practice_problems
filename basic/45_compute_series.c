#include <stdio.h>
int main(){
    float sum = 1;
    printf("Program to compute series of S1+1/2+1/3+...+1/50\n");    
    for(int i = 2; i <= 50; i++){
        sum += (float)1/i;
    }
    printf("S = %.2f", sum);
}