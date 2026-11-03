#include <stdio.h>

//Evaluates the program
int reverse(int n){
    int d, y = 0;

    //Reversing the digits of the integer
    while (n) {
        d = n % 10;
        //Check for potential overflow before updating the reversed integer
        if((n > 0 && y > (0x7fffffff - d) / 10) || (n < 0 && y < ((signed)0x80000000 - d) / 10)) {
            return 0; // Return 0 if the overflow detected
        }

        y = y * 10 + d; // Update the reversed integer
        n = n / 10;     // Move to the next digit
    }
    return y;
}

//Main caller
int main(void)
{
    int i = 123;
    printf("Original integer: %d  ", i);
    printf("\nReverse integer: %d  ", reverse(i));

    i = 208478933;
    printf("\nOriginal integer: %d  ", i);
    printf("\nReverse integer: %d  ", reverse(i));

    i = -73634;
    printf("\nOriginal integer: %d  ", i);
    printf("\nReverse integer: %d  ", reverse(i));

    return 0;
}


