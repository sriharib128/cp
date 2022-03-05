#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100000];
    scanf("%s",string);
    long long int p_a[strlen(string)+1];
    long long int p_b[strlen(string)+1];
    if(string[0]=='a')
    {    
        p_a[0]=1;
        p_b[0]=0;
    }
    else
    {    
        p_a[0]=0;
        p_b[0]=1;
    }
    for(int i=1;i<strlen(string);i++)
    {
        if(string[i]=='a')
        {    
            p_a[i]=1+p_a[i-1];
            p_b[i]=p_b[i-1];
        }
        else
        {    
            p_a[i]=p_a[i-1];
            p_b[i]=1+p_b[i-1];
        }
    }
    for(int i=0;i<strlen(string);i++)
    {
        printf("%d - %lld\t\t",i,p_a[i]);
        printf("%d - %lld\n",i,p_b[i]);
    }
    printf("\n");
    long int L=strlen(string);
    long long int M = (1e9 +7);
    long long int sub=0;
    
    for(int j=0;j<L;j++)
    {
        if( ( p_a[j] == p_b[j]) && ((p_a[L-1] - p_a[j-1]) == (p_b[L-1] - p_b[j-1])) )
        {
            sub=(sub+1)%M;
        }
    }
    if(p_a[L]==p_b[L])
        sub+=1;
    for(int i=1;i<L;i++)
    {
        for(int j=i;j<L;j++)
        {
            if(((p_a[j] - p_a[i-1]) == (p_b[j] - p_b[i-1])) && ((p_a[L-1] - p_a[j-1]) == (p_b[L-1] - p_b[j-1])) )
                sub=(sub+1)%M;
        }
    }
    printf("%lld",sub);
    return 0;
}