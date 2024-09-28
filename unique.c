    #include <stdio.h>

    int main(void){
    int num[3] = {7,4,5};
    int unique[3] = {0,0,0};
    int count = 0;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<count; j++)
        {
            if(unique[j] == i)
            {
                break;
            }
        }

        unique[count+1] = i;    
        count++;
    }
    for(int i=0; i<3; i++)
    {
        //printf("%d\n", unique[i]);
        printf("%d\n", num[i]);
    }
    }