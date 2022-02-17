#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long int k;
		cin>>k;
		
		int d[3];
		
		cin>>d[0]>>d[1];
		d[2]= (d[0]+d[1])%10;
			
		// int k = (int)(pow(2,((k-3)%4))) ; //last digit of 2 power
		int s=(2*d[2])%10 + (4*d[2])%10 + (8*d[2])%10 + (6*d[2])%10;
		int x;
		if ((k-3)%4 == 1 ) x=(2*d[2])%10;
		else if ((k-3)%4 == 2 ) x=(2*d[2])%10 + (4*d[2])%10;
		else if ((k-3)%4 == 3 ) x=(2*d[2])%10 + (4*d[2])%10 + (8*d[2])%10;
		else if ((k-3)%4 == 0 ) x=0;
		
		long long int sum = ( d[0]+d[1]+d[2] +  ((( (s*((k-3)/4)) + x )) ));

		if(k==2)
			sum = (d[0]+d[1]);
		else if(k==3)
			sum = (d[0]+d[1]+d[2]);
		// cout<<sum<<endl;
		
		if(sum%3==0)
			cout<<sum<<" - YES"<<endl;
		else
			cout<<sum<<" - NO"<<endl;
	}
 	return 0;
}