//MERGE SORT

#include <bits/stdc++.h>
using namespace std;

void merge(int a[],int l,int r,int mid)
{
	int l_z = mid-l +1;
	int r_z = r-mid;
	int L[l_z+1];
	int R[r_z+1];
	for(int i=0;i < l_z;i++)
		L[l_z]=a[i+l];

	for(int i=0;i< r_z;i++)
		R[i] = a[i+mid+1];
	L[l_z]=R[r_z] = INT_MAX;

	int l_i=0;
	int r_i=0;

	for(int i=l;i<=r;i++)
	{
		if(L[l_i]<R[l_i])
			{ a[i] = L[l_i];
				l_i++; }
		else
			{ a[i] = R[r_i];
			  r_i++; }
	}
}

void mergesort(int a[],int l,int r)
{	if(l==r) return;
	int mid = (l+r)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	merge(a,l,r,mid);
}

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
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}