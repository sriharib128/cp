#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v = {2,3,5,6,7};
	for(int i =0 ;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\nUsing Iterators\n"<<endl;
	vector<int> ::iterator it1 = v.begin();

	for(it1 = v.begin(); it1 !=v.end();++it1)
		cout<<(*it1)<<" ";
	cout<<endl;

	vector<pair<int,int>> v_p ={{1,2},{2,3},{3,4}};
	vector<pair<int,int>> ::iterator it;

	for(it = v_p.begin();it!=v_p.end();it++)
		cout<< (*it).first<< " "<< (it->second)<<endl;
	
	// *it.first is same as it->first

	cout<<"\nRange Based Loops\n"<<endl;

	//Range Based loops

	for(int &value : v) // pass by reference ==> v also changed
		cout<<value<<" ";

	for(int value :v) //pass by values ==> copied ==> V is not changed
		cout<< ++value<< " ";

	for(int value : v) 
		cout<<value<<" ";

	cout<<"\n\nIterating a Vector of pairs\n"<<endl;

	for(pair<int,int> value : v_p)
		cout<<value.first << " "<<value.second<<endl;

	cout<<"\nUsing auto Keyword\n"<<endl;

//auto - no need to specify the type of input it automatically assumes it
	auto a = 1;
	cout<<a<<endl;

	//not we can use it to initialise iterators and hence make the code more presentable

	// vector<int> ::iterator it1 = v.begin(); - no need to write this statement

	for(auto it1 = v.begin(); it1 !=v.end();++it1)
		cout<<(*it1)<<" ";
	cout<<endl;

	// for(pair<int,int> value : v_p) - no need to write this statement
	for(auto value : v_p)	
		cout<<value.first << " "<<value.second<<endl;

}