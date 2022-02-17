/*
given an array of n integers. and q queries and numberx in each query
calcutate the count of the number x in the array

constraints
1<= N   <=10^5
1<= a[i]<=10^7 //max size of array even wehn we stoe them globally is 10^7
1<= Q   <=10^5
*/
//only 10^7 time complexity in 1 second

#include <bits/stdc++.h>
using namespace std;
const int N=1e7;
int hsh[N];

int main(){

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{	cin>>a[i];
		hsh[a[i]]++;	
	}
	
	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<hsh[x]<<endl;
	}
}
//O(n) + O(q) = 10^5