#include <stdio.h>

/*
Write a C program that accepts an employee's ID, 
total worked hours in a month and the amount he received 
per hour. Print the ID and salary 
(with two decimal places) of the employee for a 
particular month. 
*/
int main(void){
    char IDemployee[10];
    int workH;
    int amount;
    printf("Type down the employee ID (Max. 10 characters): \n");    
    scanf("%s",IDemployee);
    printf("Type down the working hours: \n");
    scanf("%d", &workH);
    printf("Type down the salary amount: \n");
    scanf("%d", &amount);
    printf("Employees ID = %s\nSalary = U$%.2f", IDemployee, (float)(workH * amount));


}