#include <stdio.h>

int main(){
    float S = 1;
    printf("Program made to compute S=1+3/2+5/4+7/8\n");    
    int div = 2;
    for(int i = 3; i <= 7; i+=2){
        S += (float)i/(float)div;
        div*= 2;        
    }  
    printf("%.2f",S);
    return 0;
}