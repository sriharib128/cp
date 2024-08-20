#include <bits/stdc++.h>
using namespace std;

/*
int gcd(int a , int b ){
	if(a==0){return a;}
	int r=b%a;
	gcd(r,a);
	return r;
}
*/

int gcd(int a , int b ){
	if(a==0) {return b;}
	return gcd((b%a),a);
}

int main(){
	int a,b;
	cin>>a>>b;

	// int g=gcd(min(a,b),max(a,b));
	int g = gcd(a,b);//no need to pass in order of min and max in euclid's algorithm or long division
					// even if u divide smaller number by larger number the smaller number becomes remainder which 
					//then becomes divisor and the larger number becomes divisor

	cout<<"GCD="<<g<<endl;
	cout<<"LCM="<<(a*b/g);
}