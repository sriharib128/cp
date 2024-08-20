#include <bits/stdc++.h>
using namespace std;

void printBinary(int a){

	for(int i=10;i>=0;i--)
		cout<<((a>>i) & 1);
	cout<<endl;
	
}

int main(){

	char x= 'A';
	for(int i=0;i<=2;i++)
		{cout<<char(x++)<<"-";
		printBinary(int(x)+i);}
	
	cout<<endl;
	
	char y= 'a';
	for(int i=0;i<=2;i++)
		{cout<<char(y++)<<"-";
		printBinary(int(y)+i);}
	//we can see the in capital letters 5th bit is unset & it is set in lowercase letters 

	cout<<"A==>a "<<" 'A' | (1<<5)  =  "<<char('A' | (1<<5))<<endl; //setting 5th bit
	cout<<"a==>A "<<" 'a' & ~(1<<5)  =  "<<char('a' & ~(1<<5))<<endl<<endl;//unsetting 5th bit

	cout<<"(1<<5) = "<<char(1<<5)<<" - "<<(1<<5)<<endl;//It is space

	cout<<" ('A'|' ') = "<<char('A'|' ')<<endl<<endl;

	cout<<" '_' = " << int('_')<<" = "; // as  Asci value of letters have only upto 7 binary digits 
	printBinary(int('_'));//we can use this value as we don`t care about values greater than 7

	cout<<"('a' & '_') = "<<char('a'&'_')<<endl;
	return 0;
}