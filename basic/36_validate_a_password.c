#include <stdio.h>

int main(){
    int pass;
    printf("Validate a password if it is correct.\n");
    printf("Insert the password: ");
    scanf("%d", &pass);
    if(pass == 1234){
        printf("Correct password");
    }else{
        printf("Incorrect password");
    }
    return  0;
}