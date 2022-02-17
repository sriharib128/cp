#include <bits/stdc++.h>
using namespace std;

void printBinary(int num){

	for(int i= 10 ; i>=0; i--) // prints upto 11 bit number
		cout<<((num>>i)&1);	
	cout<<endl;
}

int main(){
	
	cout<<"set==> bit is 1"<<endl;
	cout<<"unset==> bit is 0\n"<<endl;

	cout<<"prints upto 11 bit number\n";
	printBinary((1<<12)-1);	
	cout<<endl;
	int a =13;
	printBinary(a);

	int i =6;

	cout<<"Setting i th bit"<<endl;
	printBinary(a | (1<<i));

	cout<<"UnSetting i th bit"<<endl; //OR ing with a number with all 0`s except at the required position it has 1 
	printBinary(a & ~(1<<(i))); // anding with a number which has all 1`s except at the requred position it has 0

	cout<<"Toggling i th bit"<<endl;
	printBinary(a ^ (1<<i));

	cout<<endl;

	cout<<"Counting number of 1's"<<endl;
	int ct =0;
	for(int i =31;i>=0;i--)
		if(a & (1<<i))
			ct++;
	
	cout<<ct<<endl;

	cout<<__builtin_popcount(a)<<endl; // a should be integer
	cout<<__builtin_popcountll((1LL<<35)-1);// it can be long  integer


	cout<<"\n\n\nMultiplying and dividing by 2"<<endl;
	cout<<"a*2 ==> a<<1 "<<a<<" "<<(a<<1)<<endl;
	cout<<"a/2 ==> a>>1 "<<a<<" "<<(a>>1)<<endl;

	cout<<"\n\nChecking if a number is odd or even"<<endl;

	for(int i =0; i<=4;i++){
		printBinary(i);
		if(i&1)
			cout<<i<<" - odd"<<endl;
		else
			cout<<i<<" - even"<<endl;
	}


	return 0;
}