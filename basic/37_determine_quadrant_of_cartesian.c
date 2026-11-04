#include <stdio.h>

int main(){
    int x, y;
    printf("Determine quadran of Cartesian coordinates(x, y)\n");
    printf("Type the (x) value:");
    scanf("%d", &x);
    printf("Type the (y) value:");
    scanf("%d", &y);
    printf("x: %d\ny: %d\n", x, y);
    printf("Quadrant-");
    if(x < 0){        
        if(y < 0){
            printf("III(-,-)");
        }
        else{
            printf("II(-,+)");
        }
    }
    else {
        if(y < 0){
            printf("IV(+,-)");
        }
        else{
            printf("I(+,+)");
        }
    }
    return 0;

}
