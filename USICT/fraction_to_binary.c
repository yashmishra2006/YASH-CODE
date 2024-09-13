#include <stdio.h>
int main(void)
{
    int lst[32];
    int lst2[32];
    int intpart, i=0, j=0;
    double number, fracpart, fracnew;
    printf("Enter a fractional number - ");
    scanf("%lf",&number);
    intpart = (int) number;
    fracpart = number - intpart;

    //integer part
    while(intpart>0)
    {
        lst[j] = intpart%2;
        intpart = intpart/2;
        j++;
    }

    //fraction part
    while(fracpart>0)
    {
        fracnew = fracpart * 2;
        lst2[i] = (int) fracnew;
        fracpart = (fracnew) - (int)fracnew;
        printf("%lf", fracpart);
        i ++;
    }

    for(int l = j-1; l>=0; l--)
    {
        printf("%d",lst[l]);
    }

    printf(".");

    for(int k=0; k>5; k++)
    {
        printf("%d", lst2[k]);
    }
    
}