#include <stdio.h>

int main() {
    int n;
    printf("Print numbers between 1 to 100 with a specific remainder.\n");
    scanf("%d", &n);
    for(int i = 0; i < 100; i++){
        if((i % n) == 3 ){
            printf("%i\n",i);
        }  
    }
    return 0;
}