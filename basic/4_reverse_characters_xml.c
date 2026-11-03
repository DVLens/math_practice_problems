#include <stdio.h>

int main(void){
    char xml[3] = {'X', 'M', 'L'};
    for(int i = 2; i >= 0; i--){
        printf("%c", xml[i]);
    }
}