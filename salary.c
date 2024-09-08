#include <stdio.h>

int main(void)
{
    float sal, da, hra, gross; 
    printf("Enter basic salary - ");
    scanf("%f",&sal);
    da = 0.40 * sal;
    hra = 0.20 * sal;
    gross = sal + da + hra;
    printf("Gross salary is - %f", gross);
}