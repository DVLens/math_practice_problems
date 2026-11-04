#include <stdio.h>

int main(){
    int n1, n2;
    printf("Print if a pair of numbers is in ascending/descending\n");
    printf("Type the first number of the pair:");
    scanf("%d",&n1);
    printf("Type the second number of the pair:");
    scanf("%d",&n2);

    if(n1 == n2){
        printf("Both numbers are equal.\n");
    }
    else if(n1 > n2){
        printf("The pair is descending order!\n");
    }else {
        printf("The pair is ascending order!\n");
    }    
    return 0;
}