#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{	
	if(a==0) {return b;}
	return gcd(b%a,a);
}

int main()
{
	int N;
	cin>>N;

	int A[N];
	int max  = -1;
	for(int i=0;i<N;i++)
	{
		cin>>A[i];
		if(A[i]>max)
			max=A[i];
	}

	int x = 1e6;
	int S[x][1];
	for(int i=2;i<=100;i++)
	{	
		int ct = 0;
		for(int j=i;j<=max;j+=i)
			ct++;
		S[i][0]=ct;
	}

	int t;
	cin>>t;
	while(t--)
	{
		int p,q;
		cin>>p>>q;
		int ans = S[p][0]+S[q][0]-S[((p*q)/(gcd(p,q)))][0];
		cout<<ans<<endl;;
	}
}