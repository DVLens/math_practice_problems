#include <stdio.h>

int main(void){
    int days, months, years;
    printf("Convert days to years, months, days \n");
    printf("Type down the days: \n");
    scanf("%d",&days);
    years = (days / 365);
    days -= (years * 365);
    months = (days / 30);
    days -= (months * 30);
    printf("%d Year(s) \n",years);
    printf("%d Month(s) \n",months);
    printf("%d Days(s) \n",days);
}