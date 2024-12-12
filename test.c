#include <stdio.h>
#include <math.h>

int main(void){

    float l,b,a;
    int lt,bt;

    printf("Enter length - ");
    scanf("%f", &l);
    printf("Enter breadth - ");
    scanf("%f", &b);
    printf("Enter size of tile - ");
    scanf("%f", &a);

    lt = ceil(l/a);
    b = b-a;
    bt = ceil(b/a) + 1;
    printf("%i", lt*bt);
    return 0;
}