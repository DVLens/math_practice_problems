#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, distance;    
    printf("Type down x1:\n");
    scanf("%lf",&x1);
    printf("Type down y1:\n");
    scanf("%lf",&y1);
    printf("Type down x2:\n");
    scanf("%lf",&x2);
    printf("Type down y2:\n");
    scanf("%lf",&y2);

    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
    printf("The distance between points is: %.2f", distance);
}