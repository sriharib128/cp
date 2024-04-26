#include <bits/stdc++.h>
using namespace std;

int fact(int n){
	if(n<=1) return 1;
	return fact(n-1)*n;

}
int main(){
	cout<<fact(20)<<endl;
}

// this order of functions in which they must be executed is stored in stack
// when stack overflows (more memory used) , segmentation fault occurs.