#include <stdio.h>

int main(void){
int num[3] = {1,1,2};
int unique[3];
int count = 0;

for(int i=0; i<N; i++)
{
    for(int j=0; j<count; j++)
    {
        if(unique[j] == i)
        {
            break;
        }
    }

    unique[count+1] = i;    
    count++
}
for(int i=0; i<count)
{
    printf("%d\n", unique[i]);
}
}