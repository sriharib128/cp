#include <bits/stdc++.h>
using namespace std;

int main(){
/*
	1<<n == pow(2,n)
	1<<0 ==> 1 ==> 1
	1<<1 ==> 1 0 ==> 2
	1>>1 ==> 0==> 0
*/

/* Binary Left shift and Right Shift
3 << 1
1 1  ==>  1 1 0

3 << 2
1 1  ==> 1 1 0 0

3 << 1
1 1  ==>  1

6 << 1
1 1 0 ==> 1 1

6 << 2
1 1 0 ==> 1 
*/

	cout<<"(1<<0) = "<<(1<<0)<<endl;
	cout<<"(1<<1) = "<<(1<<1)<<endl;

	cout<<endl;

	cout<<INT_MAX<<endl; // 2147483647

	int a = (1LL<<32) - 1 ; // here int is stored in 32 bits so highest number is all 32 being 1 so it is 2^32 -1
	cout<<a<<endl;// -1 // Overflowed because signed binary so only 31 bits used to store data

//we are using LL as 2^32 - 1 is int but 2^32 isn`t as it has 33 bits 1 followed by 32 zeros

	a = (1LL<<31) -1; // 
	cout<<a<<endl;// 2147483647
	
	cout<<endl;
	unsigned int b = (1LL<<32)-1;
	cout<<b<<endl;
}

/*
AND-& 
OR-| 
XOR - ^
*/