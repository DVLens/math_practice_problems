#include <stdio.h>

int main(void) {
    int q, p, r, s;    

    printf("This program print 'Wrong values' or 'Correct values' if they meet the following criteria:\n");
    printf("'p' should be even.\n");
    printf("'q', 'r' and 's' should be positive.\n");
    printf("If 'q' is greater than 'r' and 's' is greater than 'p' and if the sum of 'r' and 's' is greater than the sum of 'p' and 'q' it should print 'Correct values', otherwise print 'Wrong values'.\n");
    printf("type the 'q' value\n");
    scanf("%d", &q);
    printf("type the 'p' value\n");
    scanf("%d", &p);
    printf("type the 'r' value\n");
    scanf("%d", &r);
    printf("type the 's' value\n");
    scanf("%d", &q);    
    if((p % 2 == 0) && (q > 0) && (r > 0) && (s > 0) && (q > r) && (s > p) && ((r + s) > (p + q))){      
        printf("Correct values");
        return 0;
    }    
    printf("Wrong values");
    return 1;
}