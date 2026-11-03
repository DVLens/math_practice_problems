#include <stdio.h>
#include <stdbool.h>

bool is_Palindrome(int i){
    int n, d, y = 0;

    if(i < 0)
        return false;

    n = i;

    while(n){
        d = n % 10;

        if (y > (0x7fffffff - d) / 10 )
            return false;

            y = y * 10 + d;
            n = n / 10;
    }

    return (y == i);
}

//Write a C program to check whether an integer is a palindrome 
// or not. An integer is a palindrome when it reads the 
// same forward as backward. 

int main(void)
{
    int i = 1221;
    printf("Original integer: %d  ", i);
    printf("\nIs Palindrome: %d  ", is_Palindrome(i));

    i = -121;
    printf("\nOriginal integer: %d  ", i);
    printf("\nIs Palindrome: %d  ", is_Palindrome(i));

    i = 100;
    printf("\nOriginal integer: %d  ", i);
    printf("\nIs Palindrome: %d  ", is_Palindrome(i));

    return 0;
}
