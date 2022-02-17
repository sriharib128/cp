#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
	int p =1;
	for (int i=1;;i++){
		if((i%a==0) && (i%b==0)){
			p=i;
			break;}
	}
	return p;
}
//input  3 5 14
//output 30 15 0

int main(){

	int a,b,c; // a and b are numbers and in a set of multiples of a and b we are finding cth number
			   // And we are printh from  cth num to 0 with a step of a or b or lcm of a,b
	cin>>a>>b>>c;
	int cthnum = 1;
	for (int i =2; c>0 ; i++){
		if ((i%a == 0) ||(i%b == 0)){
			cthnum = i;
			c--;}
	}
	int step =1;

	if((cthnum%a==0)&& (cthnum%b==0))
		step=lcm(a,b);
	else if(cthnum%a == 0)
		step=a;
	else if(cthnum%b == 0)
		step=b;
	while (cthnum>=0){
		cout<<cthnum<<" ";
		cthnum=cthnum-step;
	}

	}

