#include <stdio.h>
#include <stdlib.h>


double root(long long int n)
{	
	double lo=0,hi=n,mid;

	double prec = 1e-2; // gives precision upto 1 digits

	while(hi-lo>prec)
	{
		mid=(hi+lo)/2.0;

		if(mid*mid>n)
			hi=mid;
		else
			lo = mid;
	}
    return hi;
}

int main()
{
    long long int N;
    scanf("%lld",&N);
    long long int num = (long long int)root(N)+1;
    long long int i;
    for(i=num;i>0;i--)
    {
        if(N%i==0)
            break;
    }
    long long int i2=N/i;
    long long int steps = (i-1) + (i2-1);
    printf("%lld",steps);
}