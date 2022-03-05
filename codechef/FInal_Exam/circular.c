#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);
    int array[N][2*N];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<(2*N);j+=2)
        {
            scanf("%d %d",&array[i][j],&array[i][j+1]);
        }
    }
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<(2*N);j+=2)
    //     {
    //         printf("%d_%d\t",array[i][j],array[i][j+1]);
    //     }
    //     printf("\n");
    // }
    int flag =1;
    for(int i=1;i<N;i++)
    {   
        int j=0;
        if(array[i][j]!=array[i-1][(2*N)-2])
        {
            // printf("%d %d\n",array[i][j],array[i-1][2*N-2]);
            // printf("%d %d\n",i,N);
            flag=0;break;
        }
        if(array[i][++j]!=array[i-1][(2*N)-1])
        {
            flag=0;break;
        }

        for(j=2;j<(2*N);j+=2)
        {
            if(array[i][j]!=array[i-1][j-2])
            {
                flag=0;break;
            }

            if(array[i][j+1]!=array[i-1][j-1])
            {
                flag=0;break;
            }
        }
        if(flag==0)
            break;
    }
    if(flag==0)
        printf("NO");
    else
        printf("YES");
}