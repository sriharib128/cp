#include <bits/stdc++.h>
using namespace std;

void change(int a[],int n)
{
	for(int i=0;i<n;i++)
		{	a[i]=0;
			cout<<a[i]<<" ";}
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	change(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}