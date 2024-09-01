#include <stdio.h>


int decitobin(number)
{
    int i =0;
    int lst[32];
    int quo = 0;
    while(quo>0)
    {
        quo = number/2;
        lst[i] = number%2;
        i++;
    }
    printf("In Binary- ");
    for(i; i>0; i--)
    {
        printf("%d",lst[i]);
    }
    return 0;
}

int main(void)
{
    int deci = 0;
    printf("Enter the decimal number - ");
    scanf("%d", &deci);
    decitobin(deci);
}