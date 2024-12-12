#include <stdio.h>
#include <math.h>
 
int main(void){
 
    float l,b,a;
    int lt,bt;
    
    scanf("%f %f %f", &l,&b,&a);
 
    lt = ceil(l/a);
    b = b-a;
    bt = ceil(b/a) + 1;
    printf
    return lt*bt;
}