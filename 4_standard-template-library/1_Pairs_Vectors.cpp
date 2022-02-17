#include <bits/stdc++.h>
using namespace std;

void printVec(vector <int> v){

	for(int i =0 ; i<v.size();i++)
		cout<<v[i]<< " ";
	cout<<"\n";
}

void printVecOfPair(vector<pair<int,int>> v){

	cout<<"size: "<<v.size() <<endl;
	for(int i = 0 ; i<v.size();++i)
		cout<<v[i].first<<" "<<v[i].second<<endl;
}

int main(){

// PAIRS
	pair <int,string> p;
	// p = make_pair(2,"abc");
	p = {2,"abcd"};
	cout<<p.first<<" "<<p.second<<endl;

	pair <int,string> p1 = p; // pair is copied
	p1.first = 3;
	cout<<p.first<<" "<<p.second<<endl;

	pair <int,string> &p2 = p; // reference of pair is copied
	p2.first = 3;
	cout<<p.first<<" "<<p.second<<endl;

	int a[] = {1,2,3}; // if we want to relate a[i] to b[i]
	int b[] = {2,3,4};//if u wanna do the same operation to first elements of both the arrays

	pair<int,int> p_ar[3];
	p_ar[0] = {1,2};
	p_ar[1] = {2,3};
	p_ar[2] = {3,4};
	swap(p_ar[0],p_ar[2]);
	for(int i=0;i<3;i++){
		cout<<p_ar[i].first << " "<<p_ar[i].second<<endl;
	}

//VECTORS
	//unlike arrays vectors do not have fixed size 

	// vector<pair<int,int>> v; // a vector of pairs
	vector<int> v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);//adds x to the end of vector
	}
	cout<<"VECTOR\n"<<endl;
	printVec(v); 

	vector <int> v1(10);
	printVec(v1);
	v1.push_back(7);
	printVec(v1);

	v1.pop_back();//removes last element
	printVec(v1);

	vector<int> v2 = v; //copies v to v2 unlike arrays where u can only pass reference
	// vector<int> &v2 = v; // to pass only reference


//A vector of pairs
	vector<pair<int,int>> v3;
	printVecOfPair(v3);
	
	cin>>n;
	for(int i = 0 ; i<n;i++){
		int x, y ;
		cin>>x>>y;
		v3.push_back({x,y});
	}
	printVecOfPair(v3);
}

/*INPUT
5
1 2 3 4 5
3
1 2
2 3
4 5
*/