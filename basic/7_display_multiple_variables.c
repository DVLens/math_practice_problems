#include <stdio.h>

int main(void){
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("%d + %c = %d\n", a, c, a + c);
    printf("%f + %c = %f\n", x, c, x + c);
    printf("%f + %f = %f\n", dx, x, dx + x);
    printf("((int)%d) + %ld = %ld\n", (int)dx, ax, (int)dx + ax);
    printf("%d + %f = %f\n", a, x, a + x);
    printf("%d + %d = %d\n", s, b, s + b);
    printf("%ld + %d = %ld\n", ax, b, ax + b);
    printf("%d + %c = %d\n", s, c, s + c);
    printf("%ld + %c = %ld\n", ax, c, ax + c);
    printf("%ld + %ld = %ld\n", ax, ux, ax + ux);

}