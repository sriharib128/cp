#include <bits/stdc++.h>
using namespace std;

void func(int n)
	{
	if(n==0) return;
	cout<<n<<endl;
	func(n-1);
	}

void func2(int n)
	{
	if(n==0) return;
	func2(n-1);
	cout<<n<<endl;
	}


int fact(int n){
	if(n==0) return 1;
	return fact(n-1)*n;
	}

int main()
{
func(5);
cout<<endl;
func2(5);

int n;
cin>>n;	
cout<<endl<<fact(n)<<endl;

}
 /*in func2 first it enters the function reaches line 14 then again goes to line 11
this repeats till n=0. after thr function return at n=0 it will be when func(1-1) is called
after f(1-1) is returnes it then continues to line 15.then line after func(2-1) is executed
then func(3-1) then func(4-1) and then func(5-1).Thus we get the order 1 2 3 4 5.
this order of functions in which they must be executed is stored in stack

when stack overflows (more memory used) , segmentation fault occurs.*/