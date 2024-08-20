#include <bits/stdc++.h>
using namespace std;
const int N= 1e5;

//normal Method

// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 		int n,q;
// 		cin>>n>>q;
// 		int ar[n];
// 		for(int i=1;i<=n;i++)
// 			cin>>ar[i];
// 		while(q--){
// 			int l,r;
// 		 	cin>>l>>r;
// 		 	int gc=0; //gcd of 0 and any other number is the number itself
// 		 	for(int i=1;i<l;i++)
// 		 		gc=__gcd(gc,ar[i]);
// 		 	for(int i=r+1;i<=n;i++)
// 		 		gc=__gcd(gc,ar[i]);
// 		 	cout<<gc<<endl;
// 		 }
// 	}
// }

//Prefix method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int ar[n+1];
		for(int i=1;i<=n;i++)
			cin>>ar[i];

		int forward[n+1];
		int backward[n+1];
		int gc=0;
		for (int i=1;i<=n;i++)
			{gc=__gcd(gc,ar[i]);
			forward[i] = gc;}
		gc=0;
		for (int i=n;i>=1;i--)
			{gc=__gcd(gc,ar[i]);
			backward[n-i+1] = gc;}

		while(q--){
			int l,r;
		 	cin>>l>>r;
		 	cout<<(__gcd(forward[l-1],backward[r+1]))<<endl;
		 }
	}

}