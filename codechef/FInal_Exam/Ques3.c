#include <stdio.h>
#include <stdlib.h>

int cmp(const void * a,const void * b) {
   return (* (long long int * )a-*(long long int * )b);
}
long int BinarySearchLow(long long int prefix[],long long int L,long int N)
{
    long int start=0;
    long int end =N-1;
    while(end-start>1)
    {
        long int mid = (start+end)/2;
        if(prefix[mid]>=L)
            end=mid;
        else
            start =mid;
    }
    if(prefix[start]>=L)
        return start;
    else if(prefix[end]>=L)
        return end;
    else
        return -1;
}

long int BinarySearchHigh(long long int prefix[],long long int R,long int N)
{
    long int start=0;
    long int end =N-1;
    while(end-start>1)
    {
        long int mid = (start+end)/2;
        if(prefix[mid]<=R)
            start=mid;
        else
            end=mid;
    }
    if(prefix[end]<=R)
        return end;
    else if(prefix[start]<=R)
        return start;
    else
        return -1;
}

int main()
{
    long int N;
    scanf("%ld",&N);
    long long int B[N];
    for(int i=0;i<N;i++)
        scanf("%lld",&B[i]);
    qsort(B, N, sizeof(long long int), cmp);
    // for(int i=0;i<N;i++)
    //     printf("%lld ",B[i]);
    long long int prefix[N];
    prefix[0]=B[0];
    // printf("\n%lld ",prefix[0]);
    for(int i=1;i<N;i++)
    {
        prefix[i]=prefix[i-1]+B[i];
        // printf("%lld ",prefix[i]);
    }
    // printf("\n");
    long int Q;
    scanf("%ld",&Q);
    while(Q--)
    {
        long long int L,R;
        scanf("%lld %lld",&L,&R);
        long int i_Low=BinarySearchLow(B,L,N);
        long int i_High=BinarySearchHigh(B,R,N);
        // printf("%ld %ld \t\t",i_Low , i_High);
        long long int ans=0;
        if(i_High<0)
            ans=0;
        else if(i_Low<0)
            ans=0;
        else if((i_High-i_Low)<0)
            ans=0;
        else
        {
            // if(i_Low>0)
                ans = i_High-i_Low+1;
                // ans = prefix[i_High]-prefix[i_Low-1];
            // else
            //     ans=i_High;
                // ans = prefix[i_High];
        }
        printf("%lld ",ans);
    }
}