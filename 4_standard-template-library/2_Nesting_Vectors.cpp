#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
	cout<<"size: "<<v.size() <<endl;

	for(int i = 0 ; i<v.size();++i)
		cout<<v[i]<<" ";
	
	cout<<endl;
}

void changeVec(vector<int> &v1){
	cout<<"size: "<<v1.size() <<endl;

	for(int i = 0 ; i<v1.size();++i)
		v1[i]=0;
}


int main(){
	int N;
	cin>>N;

//Array of Vectors
	vector<int> v_a[N]; //created 10 vectors

	for(int i=0; i<N;i++){
		int n;
		cin>>n;
		for(int j=0;j<n;j++){
			int x;
			cin>>x;
			v_a[i].push_back(x);
		}
	}

	for(int i=0;i<N;i++)
		printVec(v_a[i]);
	
	cout<<v_a[0][1]<<endl;
	//here v is behaving like a 2-d array whose number of rows is fixed but number of columns can be changed
	//i.e, number of elements in each ector can be changed
	//To have both number of rows and columns variable one must use vector of vectors

	cout<<"\npass my reference using &\n"<<endl;
	for(int i=0;i<N;i++)
	{
		changeVec(v_a[i]); //Add and remove & before v1 in changeVec method to see the difference in output
		//if use pass with & then only referenceis passed and any change made will be reflected on original vector
		printVec(v_a[i]);
	}
	
	cout<<"\nVector of Vectors\n"<<endl;

// Vector of Vectors

	vector<vector <int> > v;

	for(int i=0;i<N;++i){
		int n;
		cin>>n;
		vector<int> temp;
		for(int j =0; j<n;j++){
			int x;
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);//adding the temp vector to our vector of vectors
	}
	//instead of temp we can add an empty vector to v befor j loop and add elements to that vector using v[i].push_back(x)


	for(int i=0;i<v.size();++i)
		printVec(v[i]);

	v[0].push_back(10);

	for(int i=0;i<v.size();++i)
		printVec(v[i]);

	cout<<v[0][1]<<endl; // behaves as a 2-d array whose both rows and columns can be changed
}

/* INPUT
3

3
1 2 3
3
3 4 5
2
1 2

3
1 2 3
3
3 4 5
2
1 2
*/