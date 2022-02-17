#include <bits/stdc++.h>
using namespace std;
const int N=1e5;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
// creating a 2d array with all zeros
		long long ar[n+10][26];
		for(int i=0;i<=n;i++)
			for(int j=0;j<26;j++)
				ar[i][j]=0;

//adding 1 to the letter which is encounterd against that index 		
		for(int i=1;i<=n;i++)
			ar[i][s[i-1]-'a'] += 1;

//Finding prefix sum as to number of times a letter occured till that index
		for(int i=1;i<=n;i++)
			for(int j=0;j<26;j++)
				ar[i][j] += ar[i-1][j];
			
		//Solving for each query		
		while(q--)
		{
			int a,b;
			cin>>a>>b;
			int oddct=0;

			for(int i=0;i<26;i++)
				if((ar[b][i] - ar[a-1][i])%2 != 0)
					oddct++;
			
	// If the number of letters with odd count is more than one than it can not be pallindrome			

			if(oddct>1)
				{cout<<"NO"<<endl;}
			else
				{cout<<"YES"<<endl;}
		}
	}

}