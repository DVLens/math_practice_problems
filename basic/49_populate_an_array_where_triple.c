#include <stdio.h>

int main(){
    int n[5], x;
    printf("Print the triple of the previus element in the array.\n");
    printf("Type the initial value: ");
    scanf("%d",&x);
    for(int i = 0; i < 5; i++){
        n[i] = x;
        printf("n[%d] = %d\n",i, n[i]);
        x*=3;        
    }
    return 0;
}