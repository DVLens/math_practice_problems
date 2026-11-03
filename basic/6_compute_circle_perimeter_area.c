#include <stdio.h>
#define PI 3.14159f
int main(void){
    float r = 6.0f;
    printf("Perimeter of the Circle = %f\n", 2*PI*r);
    printf("Area of the Circle = %f", (PI * r * r));
    return 0;
}