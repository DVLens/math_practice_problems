#include <stdio.h>

int main(){
    int arr[5], res[5];    
    int pos = -1, npos = 0;
    printf("Print the position and the value of the array when it is less than 5.\n");
    for(int i = 0; i < 5; i++){
        int n;
        printf("Type the value: ");
        scanf("%d", &n);
        arr[i] = n;
        if(n < 5){
            res[npos] = i;
            npos++; 
        }
    }    
    for(int i = 0; i < npos; i++){
        printf("A[%d] = %d\n", res[i], arr[res[i]]);
    }
    
    return 0;
}