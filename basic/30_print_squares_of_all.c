#include <stdio.h>

int main(){
    int n;
    printf("Print all squares of all even numbers up to a given value.\n");
    printf("Type the number:\n");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++){
        if(i % 2 == 0){
            printf("%d^%d = %d\n", i,i, i * i);
        }        
    }
    return 0;
}