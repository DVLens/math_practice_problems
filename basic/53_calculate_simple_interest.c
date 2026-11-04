#include <stdio.h>

int main(){
    float p, r;
    int y;
    printf("Program to calculate simple interest(P, R, T)\n");
    printf("Type the principle (p): ");
    scanf("%f", &p);
    
    printf("Type the rate of interest (r) in %%: ");
    scanf("%f", &r);
    r *= .01;

    printf("Type years (y): ");
    scanf("%d", &y);

    printf("Simple interest: %.2f", (r * p) * y);
    return 0;
}