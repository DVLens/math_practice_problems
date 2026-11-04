#include <stdio.h>

int main(){
    int n = 0, prd = 1;
    printf("Print 3 numbers on a line, starting from 1 and printing n lines with their squares.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {        
        for (int j = 0; j < 3; j++) {
            prd *= i;
            printf("%d ", prd);
        }        
        prd = 1;
        printf("\n");
    }
}