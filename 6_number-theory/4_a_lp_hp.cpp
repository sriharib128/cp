#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;

int main()
{
//Finding lowest prime and highest prime of a number

//Sieve algorithm
	vector<bool> isprime(N,1); // sets all isprime[N] to 1
	vector<int> lp(N,1),hp(N,1);

	isprime[0] =lp[0]=hp[0]=0;
	isprime[1] =lp[1]=hp[1]=0;

	for(int i=2;i<N;i++)
	{	
		if(isprime[i]==1)
		{	lp[i]=hp[i]=i;
			for(int j=2*i;j<N;j+=i)
			{	
				isprime[j]=0;
				hp[j] =i;
				
				if(lp[j]==1)
					lp[j]=i;
			}
		}

	}

	cout<<"n-p-lp-hp"<<endl;

	for(int i=0;i<=100;i++)
	{
		cout<<i<<"- "<<isprime[i]<< " "<<lp[i]<< " "<<hp[i]<<endl;;
	}
//N*log(log(N))
}