# include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "hi";
	cout<<s<<endl;

	string s2;
	cin>> s2;//takes the input till it encouters space or next line
	
	cout<<s2<<endl;
	
	string result = s+s2;//string concatenation
	cout<<(s==s2)<<endl;

	// Indexing
	s2[0] = 'a';
	cout<<s2<<" "<<s2.size()<< endl;

// talking both the inputs in the same line
	cin>> s>>s2;
	cout<<s<<" "<< s2<<endl;


//GetLine
	string str1,str2;
	getline(cin,str1);
	cout<< str1<<" this is string 1"<<endl;
	getline(cin,str2);
	cout<<str2<<" this is string 2"<<endl;
/* Here we did not get anything in output for printing str1
	This is because after taking hello for s2 in line 8 it ecnounters space so stops there
	Then when we take again cin in line 20, it takes world for s adn abd for s2	
	the coursor is still in the line of abd
	Now, when we use getline in line 26 we are talking the empty ine from abd till it encouters new line
	Now, get line in line 28 takes the next line "pqr  rst" to str2
*/
// to remove this problem we use cin.ignore() - It ignore the remaining line

	int t;
	cin>>t;
	while(t--){
		string a;
		getline(cin,a);
		cout<<a<<endl;	
	}

// Code to move the cursor fom line 7 to line 8 in the inputf.in file
	s="line 3";
	int p = s.size();
	while(p--){
	 cin.ignore();
	}

// the above code using cin.ignore
	
	cin>>t;
	cin.ignore();
	cout<<t<<endl;
	while(t--){
		string a;
		getline(cin,a);
		cout<<a<<endl;	
	}

//Reversing a string
	string s_reverse;
	for(int i = s.size()-1;i>=0;i--){
		s_reverse.push_back(s[i]);
	}
	cout<<s_reverse<<endl;
// We use push back method instead of taking each character from back and adding them to a string as its time complexity is more.

/* When working with very large numbers, we input them as strings a to each character er subtract their '0'ascii value from them.
	This will give the actual number*/
}


/*INPUT
hello world
abd
pqr  rst
3
line 1
line 2
line 3
3
line 1
line 2
line 3
*/