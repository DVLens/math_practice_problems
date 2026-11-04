#include <stdio.h>

int main(){
    int n[5];
    int s = 0x7fffffff, pos = -1;
    printf("Find the smallest element in an array.\n");    
    for(int i = 0; i < 5; i++){
        printf("Type the value for n[%d]", i);
        scanf("%d",&n[i]);
        if (n[i] < s) {
            pos = i;
            s = n[i];
        }
    }    
    printf("The smallest value is: %d\n", s);
    printf("The position is: %d\n", pos);    
    return 0;
}