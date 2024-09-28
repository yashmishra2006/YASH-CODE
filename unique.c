    #include <stdio.h>

    int main(void){
    int num[3] = {1,1,1};
    int unique[3] = {0,0,0};
    int count = 1;
    num[0] = 5;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<count; j++)
        {
            if(unique[j] == i)
            {
                break;
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