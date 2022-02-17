/*
Given the total number of persons n and a number k which indicates that k-1 persons
are skipped and kth person is killed in circle in a fixed direction.
The task is to choose the safe place in the circle so that when you perform these 
operations starting from 1st place in the circle, you are the last one remaining and survive.
*/

#include <bits/stdc++.h>
using namespace std;

char rec(string s,int k){
	if(s.size()==0) return s[0];
	
}


int main(){
	int n,k;
	cin>>n>>k;
	string s ="";
	char a ='a';
	while(n--){
		s+=a++;
	}
	rec(s,k-1);
	cout<<s<<endl;
}