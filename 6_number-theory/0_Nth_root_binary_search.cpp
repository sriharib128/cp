#include <bits/stdc++.h>
using namespace std;

int main()
{	
	double n;
	cin>>n; //find sqroot of which number

	double lo=0,hi=n,mid;

	double prec = 1e-7; // gives precision upto 6 digits

	while(hi-lo>prec)
	{
		mid=(hi+lo)/2.0;

		if(mid*mid*mid>n)
			hi=mid;
		else
			lo = mid;
	}
	
	cout<<fixed<<setprecision(9)<<lo<<" and \n"<<hi<<endl;
	cout<<pow(n,(1.0/3))<<" - using pow"<<endl;
	
}