#include <bits/stdc++.h>
using namespace std;

int main(){

	//Swapping 2 numbers
	int a=4;
	int b=6;

	a=a^b;

	b=b^a; //==> b^(a^b) ==> b^b^a(xor is assosciative) ==> 0^a ==> a

	a= a^b; // ==> (a^b)^a ==> a^a^b ==> 0^b ==> b

	/*
	Given a number n all integers present in it has even count except 1 find in
	*/

	int x;
	cin>>x;
	int ans=0;
	for (int i=0;i<9;i++){
		int a;
		cin>>a;
		ans^=a; // a^b^c^d^e ==> all numbers with even count will become 0
	}
	cout<<a<<endl;
	cout<<(a^1)<<endl;
}
/*INUPUT
9
2 4 6 7 7 4 2 2 2

*/