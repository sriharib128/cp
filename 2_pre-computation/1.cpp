/*
Give factorial of a number N % M in t test cases

M=10^9 +7
//Constraints
1<= T <= 10^5
1<= N <= 10^5
*/



#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5+10;
long long fact[N];

int main()
{	
	//Calculation fact of all numbers before hand

	fact[0]=fact[1]=1;
	for(int i= 2;i<=N;i++){
		fact[i]=(fact[i-1]*i) %M ;
	}

	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

	cout<<fact[n]<<endl;
}
}

// Here time complexity is O(N) + O(T) = 10^5  
//But if we calculated the factorial of a number inside the test cases then
// time complexity becomes O(T^N) = 10^10
// This is a Precomputaiton  technique
