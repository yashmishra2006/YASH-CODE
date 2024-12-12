#include <stdio.h>
#include <math.h>

int main(void){

    float l,b,a,lt,bt;

    printf("Enter length");
    scanf("%f", &l);
    printf("Enter breadth");
    scanf("%f", &b);
    printf("Enter size of tile");
    scanf("%f", &a);

    lt = int(ceil(l/a));
    b = b-a;
    bt = int(ceil(b/a));
    printf("%f", lt);
    printf("%f", bt);
    printf("%f", lt*bt);
    return 0;
}