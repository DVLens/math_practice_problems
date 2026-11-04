#include <stdio.h>

int main(){
    int num = 0;
    float val, sum = 0;
    printf("Calculate the average mathematics marks of some students. (Input 0 to terminate)\n");
    while (val != 0) {
        num++;
        val = 0;        
        printf("Write the value of number (%d) :", num);
        scanf("%f", &val);
        sum += val;        
    }
    num--;
    printf("The total average of (%d) students is: %f", num, (float)(sum / num));
}