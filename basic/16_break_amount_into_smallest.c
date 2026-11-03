#include <stdio.h>

int main(){
    int quantity;
    float money;
    printf("Type down the money to break in bank notes:");
    scanf("%f", &money);
    
    quantity = (money / 500);
    printf("%d Note(s) of 500.00\n", quantity);
    money -=(quantity * 500);
        
    quantity = (money / 100);
    printf("%d Note(s) of 100.00\n", quantity);
    money -=(quantity * 100);
        
    quantity = (money / 50);
    printf("%d Note(s) of 50.00\n", quantity);
    money -= (quantity * 50);
        
    quantity = (money / 20);
    printf("%d Note(s) of 20.00\n", quantity);
    money -= (quantity * 20);
        
    quantity = (money / 10);
    printf("%d Note(s) of 10.00\n", quantity);
    money -= (quantity * 10);    
    
    quantity = (money / 5);
    printf("%d Note(s) of 5.00\n", quantity);
    money -= (quantity * 5);    
    
    quantity = (money / 2);
    printf("%d Note(s) of 2.00\n", quantity);
    money -= (quantity * 2);
        
    quantity = (money / 1);
    printf("%d Note(s) of 1.00\n", quantity);
    money -= (quantity * 1);
            
}