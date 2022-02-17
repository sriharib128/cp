/*
Accept number of workers n. then number of days that worker works in a month. Then the days on which 
those workers work. Now find two workers who are present on same days for maximum time.
(number of intersecting dates must be maximum between those two workers)  
*/

#include <bits/stdc++.h>
using namespace std;

void printBinary(int a){
	for(int i=30;i>=0;i--)
		cout<<((a>>i)&1);
	cout<<endl;
}

int main(){
	int n;
	cin>>n;
	vector<int> masks(n,0);

	for(int i=0;i<n;i++){
		int a ;
		cin>>a;
		int mask = 0;
		for(int j =0;j<a;j++){
			int d;
			cin>>d;
			mask = (mask|(1<<d));// we are setting those where the worker is present as 1 
				//and remaining of the 30 bits as 0
		}
		masks[i] = mask;
		// cout<<masks[i]<<"-";
		// printBinary(masks[i]);
	}

	//finding people with maximum intersection
	int max=0,p1=-1,p2=-1;

	for(int i=0;i<n;i++){
		for(int j= i+1;j<n;j++){
			int intersection = masks[i]&masks[j];
			if(max<__builtin_popcount(intersection))
				{
					max=__builtin_popcount(intersection);
					p1=i;p2=j;
				}

		}
	}
	cout<<p1<<" "<<p2<<" "<<max<<endl;;
	return 0;
}
/*INPUT
5
4
1 4 7 9
6
2 9 1 7 25 29
7
1 23 4 7 9 11 29
10
2 28 8 7 9 10 30 21 18 19
4
1 11 29 7
*/