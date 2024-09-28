    #include <stdio.h>

    int main(void){
    int num[3] = {1,1,2};
    int unique[3] = {0,0,0};
    int count = 1;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<count; j++)
        {
            if(unique[j] == num[i])
            {
                continue;
            }
        }

        unique[count] = i;    
        count++;
    }
    for(int i=0; i<3; i++)
    {
        //printf("%d\n", unique[i]);
        printf("%d\n", num[i]);
    }
    printf("num 0 - %d\n", num[0]);
    }