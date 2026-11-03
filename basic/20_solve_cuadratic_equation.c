#include <math.h>
#include <stdio.h>
#include <stdbool.h>

// ax^2 + bx + c = 0;
int main() {
    float n1, n2, n3;
    printf("Ingresa el valor de a: \n");
    scanf("%f", &n1);
    printf("Ingresa el valor de b: \n");
    scanf("%f", &n2);
    printf("Ingresa el valor de c: \n");
    scanf("%f", &n3);
    float root = (n2*n2) - (4 * n1 * n3);

    if(root < 0 || n1 == 0){
        printf("It is not posible to find x root is negative or 'a' is 0");
        return 1;
    }
    float square = sqrtf(root);
    printf("Root1 = %f\n", (-n2 + square) / (2 * n1) );
    printf("Root2 = %f\n", (-n2 - square) / (2 * n1));
    return 0;
}