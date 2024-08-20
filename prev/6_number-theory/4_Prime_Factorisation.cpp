#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;

int main()
{
	//the smallest divisor(other than 1) of any number is a prime number

	int n;
	cin>>n;

	vector <int> primefactors;
	for(int i=2;i*i<=n;i++) //==> i<=sqrt(n)
	{
		while(n%i==0)
		{
			primefactors.push_back(i);
			n/=i;
		}

	}
	if(n>1)
		primefactors.push_back(n);

	for(int i=0;i<primefactors.size();i++)
		cout<<primefactors[i]<<" ";

//Sieve algorithm
	bool isprime[N][1];

	for(int i=2;i<N;i++)
		isprime[i][1] = 1;

	isprime[0][1] = 0;
	isprime[1][1] = 0;

	for(int i=2;i<N;i++)
	{	
		if(isprime[i][1]==1)
		{
			for(int j=2*i;j<N;j+=i)
				isprime[j][1]=0;
		}

	}

	cout<<isprime[2][1]<<endl;
	//N*log(log(N))
}