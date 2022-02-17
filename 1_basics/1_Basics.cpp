#include <bits/stdc++.h>
using namespace std;
const int n = 1e7 // should add const when declaring global variables
//u can max store 10^7 in global variable without a segmentation fault occuring

// u can max store 10^5 in local varibale without getting a segmentation fault



void increment(int n , int &n1)//here & represents pass by reference
{
	n++;
	n1++;
}

void incr(int n) // Call by value
{
	n++;
}


int main(){

	bool d =-12;
	bool a = 14;
	bool b = 0;
// all numbers of other than 0 is True
	cout<<a<<endl<<b<<endl<<d<<endl;

	char c='a';
	cout<<(int)c<<endl;
	cout<<'a'-'b'<<"\n";
// cin takes the input for a variable till it gets a space or a next line
// it doesen't matter if thee are multiple spaces or there are mutiple empty new lines
// for char if u give 12 it will give 1 to the first variable and 2 to the next variable as char takes a single value
	
	int e;
	double f;
	char g;
	cin>>e>>f>>g;
	cout<<e<<" "<<f<<" "<<g<<" "<<(int) g<<endl;

	cout<<3/2<<" "<< 3/2.0<<"\n";

//OverFlow
	int p =100000;
	int q= 100000;
	
	long int r = p*q;
	long int k = q*1LL*q; //1LL is long Long integer  like 1.0 is double
	cout<<r<<" "<<k<<"\n";

/* The problem with using double is that we can store huge values but 
	they wont be stores accurately*/
	double o =1e24;//10^24
	cout<<o<<endl;
	cout<<fixed<<o<<"\n"<<endl;
	cout<<fixed<<setprecision(0)<<o<<endl;

// anything can come inside the for loop 
	for(int i=1;i<=10;cout<<i++<<endl){}

// while submitting in online if they ask for tesct cases
	int t;
	cin>>t;
	while(t--){
		//code
	}

// Call by Value and Call by reference

	int a =3;
	cout<<a<<endl;
	incr(a);/*here there is no change of a as actual variable is not passed 
	          only a copy of the variable is passed this is called call by value*/
	cout<<a<<endl;

	int b= 5;
	cout<<a<<" "<<b<<endl;
	increment(a,b);/*Since a is passed by value, actual variable is not changed
	                 but b is passed by reference, therefore the actual variable b changed*/
	cout<<a<<" "<<b<<endl;

 /*
	For arrays we do not need to use & because arrays are always passed by reference
	While passing an array as an argument u can leave the first dim empty but u need to specify the remaining dimentsions
	Ex ; -void func ( a[][20] )
	If the size of the array is a variable then declare the array as a global variable and then u can use it in any fuction
 */

}
