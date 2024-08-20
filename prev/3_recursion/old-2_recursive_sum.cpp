//Program to print sum of digits of a number and recursively printing sum till we get 1 digit output
#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{	if (n%10 == 0) return 0;
	return (sum(n/10) + n%10);
}

int main(){
	int n;
	cin>>n;
	while(sum(n)/10!=0){
		n=sum(n);
	}
	cout<<sum(n);
	return 0;
}