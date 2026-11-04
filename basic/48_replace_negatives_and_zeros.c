#include <stdio.h>

int main(){
    int arr[5], x;
    printf("Replace the elements zero and negative in the array with 100.\n");
    for(int i = 0; i < 5; i++){
        printf("Type the value for arr[%d]: ", i);
        scanf("%d", &x);
        if(x <= 0){
            arr[i] = 100;
        }
        else{
            arr[i] = x;
        }
    }
    printf("The array values are:\n");
    for(int i = 0; i < 5; i++){
        printf("n[%d] = %d\n",i, arr[i]);
    }


}