#include <bits/stdc++.h>
using namespace std;

void printBinary(int n){
	cout<<n<<" - ";
	for(int i=6;i>=0;i--)
		cout<<((n>>i)&1);
	cout<<endl;
}

void isPow(int n){

	printBinary(n);
	printBinary(n-1);
	if(n&(n-1))
		cout<<"not a power";
	else
		cout<<"it is a power";
	cout<<endl<<endl;
}

int main(){
	int a = 59;
	int i = 3;

	cout<<"if a num is power of 2"<<endl;
	isPow(16);

	isPow(14);

	isPow(8);

	/*Removing least significant bits upto i th number
		i=3;
		00000111011   to get result & it with
		11111110000   this is negation of
		00000001111   this is obtained by
		00000010000-1 which is (1<<(i+1)) -1
	*/
	cout<<"unsetting LSB"<<endl;
	printBinary(a);
	printBinary((a & ~((1<<(i+1))-1)));

	cout<<endl<<endl;

	/*Removing most significant bits upto i th number
		i=3;
		00000111011   to get result & it with
		00000001111   this is obtained by
		00000010000-1 which is (1<<(i+1)) -1
	*/

	cout<<"unsetting MSB"<<endl;
	printBinary(a);
	printBinary((a & ((1<<(i+1))-1)));

}