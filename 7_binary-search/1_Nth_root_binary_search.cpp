#include <bits/stdc++.h>
using namespace std;

int main()
{	
	double n;
	cin>>n; //find sqroot of which number

	double lo=0,hi=n,mid;

	double prec = 1e-2; // gives precision upto 6 digits

	while(hi-lo>prec)
	{
		mid=(hi+lo)/2.0;

		if(mid*mid*mid>n)
			hi=mid;
		else
			lo = mid;
	}
	
	cout<<fixed<<setprecision(3)<<lo<<" and "<<hi<<endl;
	cout<<pow(n,(1.0/3))<<" - using pow"<<endl;
	
}