#include <stdio.h>

int main(void){
    int seconds, hours, minutes;
    printf("Type down the seconds to convert: \n");
    scanf("%d", &seconds);
    
    hours = seconds / 3600;
    seconds -= (hours * 3600 );

    minutes = seconds / 60;
    seconds -= (minutes * 60);

    printf("H:M:S - %d:%d:%d", hours, minutes, seconds);
}