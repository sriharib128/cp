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
		
		int sum = (d[0]+d[1]+d[2]);
		
		cout<<d[0]<<d[1]<<d[2];
		
		int x= d[2];
		
		for(int i=3;i<k;i++)
		{
			int y=(((int)pow(2,(i-2)))%10 *x)%10;
			sum += y;
			// x=y;
			cout<<y;
		}
		cout<<" - "<<sum;
		cout<<endl;

	}
	return 0;
}
/*INPUT
2
2 3 3
13 8 1
*/