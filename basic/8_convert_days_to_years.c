#include <stdio.h>

//Ignore leap year
int main (void){
    int days, years, weeks;    
    days = 1329;
    printf("Total days: %d\n", days);    
    years = days / 365;
    weeks = (days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));    
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

}
