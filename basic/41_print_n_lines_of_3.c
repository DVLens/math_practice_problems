#include <stdio.h>

int main(){
    int n = 0;
    printf("Print 3 numbers on a line, starting from 1 and printing n lines.\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {        
        for (int j = 0; j < 3; j++, i++) {
            printf("%d ", i);
        }
        i--;
        printf("\n");
    }
}