#include <bits/stdc++.h>
using namespace std;

void print(map<int,string> m){
	cout<<"size: "<<m.size() <<endl;

	for(auto value:m)
		cout<<value.first<<" "<<value.second<<endl;
	
	cout<<endl;
}

void prin(unordered_map<int,string> m){
	cout<<"size: "<<m.size() <<endl;

	for(auto value:m)
		cout<<value.first<<" "<<value.second<<endl;
	
	cout<<endl;
}

int main(){
	map<int,string> m; // stored as pair //Maps use red black tree
	m[1] = "a";   //O(log(n))
	m[5] = "bcd";
	m[3] = "oc";
	m[6] = "c";
	m[1] = "cud";
	auto it = m.find(3); //O(log(n)) -- return m.end() if given key is not in the map
	m.erase(it); // m.erase(3);
	if(it == m.end())
		cout<<"NO VALUE"<<endl;
	print(m);
	//accessing a value in map - O(log(n))
	// if map is <string,string> O(string.size()*Log(n))
	m[5];//this also has a O(log(n)) and its value is ""
		// if it was int it is initialised to 0

	unordered_map<int,string> m1; // unordered maps us hashing table
	m1[1] = "a";   //O(1)
	m1[5] = "bcd";
	m1[3] = "oc";
	m1[6] = "c";
	m1[1] = "cud";
	prin(m1);
	m1.find(3);//O(1);

	/*
		You can use pairs , vectors any thing in ordered maps as they can be compared(v1<v2)
		You can only use int, string, float ,etc in unordered maps as they have inbuilt hash functions
		but vectors and pairs do not have any inbuilt hash function

	*/

	/*
		Multimaps - used to store duplicates ==> m[6]= "A" ; m[6] = "B"; it is stored twice not overwritten
	*/
 

 }