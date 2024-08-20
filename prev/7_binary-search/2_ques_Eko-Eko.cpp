#include <bits/stdc++.h>
using namespace std;
const long long int N=1e6+10;
long long int A[N];
long long int m;

bool isSuff(long long int a,long long int n)
{
	long long int sum =0;
	for(long long int i=0;i<n;i++)
		if(A[i]>=a)
			sum+= (A[i]-a);
	return (sum>=m);
}

int main()
{
	long long int n;
	cin>>n>>m;

	for(long long int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	long long int hi=1e9 , lo=0 , mid;

	while(hi-lo>1)
	{
		mid = (lo+hi)/2;

		if(isSuff(mid,n))
			lo=mid;
		else
			hi=mid-1;
		cout<<lo<<" "<<hi<<endl;
	}
	if(isSuff(hi,n))
		cout<<hi<<endl;
	else
		cout<<lo;

	cout<<isSuff(31,n);
}