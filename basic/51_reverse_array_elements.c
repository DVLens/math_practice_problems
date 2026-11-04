#include <stdio.h>

int main(){
    int arr[5];
    printf("Program to reverse the elements in a array by swaping.\n");
    for(int i = 0; i < 5; i++){
        printf("Type n[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int j = 4;
    for(int i = 0; i < 5 / 2; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i = 0; i < 5; i++){
        printf("array_n[%d] = %d\n", i, arr[i]);
    }
    
}