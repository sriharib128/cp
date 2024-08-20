#include <bits/stdc++.h>
using namespace std;
const int M =1e9;

int bin_recur(int x, int y){

	if(y==0){return 1;}

	int g= bin_recur(x,y/2);

	if(y & 1)			//if asked for % M
		return x*g*g;	// ( x * ((g*1LL*g)%M) ) % M // added 1LL so that correct no is % M
	else
		return g*g;		// (g*g) % M
}

int bin_iter(int a,int b){
	int ans =1;
	while(b){
		if(b&1){
			ans = ans*a; // ans = (ans *1LL* a)%M
		}
		a=a*a; // a= a*a %M
		b=b>>1;
	}
	return ans;
}

int main(){
	
	double d = 1e24;
	cout<<fixed<<setprecision(d)<<d<<endl; // double can store large values but not with accuracy
	//pow(a,b) returns a binary value therefore we can not use it

	int a,b;
	cin>>a>>b;
	cout<<"Using Iteration - faster - "<<bin_iter(a,b)<<endl;
	cout<<"Using Recursion - slower - "<<bin_recur(a,b)<<endl;
	cout<<pow(a,b)<<endl;

}