#include <stdio.h>
#include <math.h>

int main(void){

    int l,b,a,lt,bt;

    printf("Enter length");
    scanf("%i", &l);
    printf("Enter breadth");
    scanf("%i", &b);
    printf("Enter size of tile");
    scanf("%i", &a);

    lt = ceil(l/a);
    b = b-a;
    bt = ceil(b/a);
    
    printf("%i", lt*bt);
    return 0;
}