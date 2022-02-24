#include <bits/stdc++.h>
using namespace std;


vector<int> parseInts(string str) {
	// Complete this function
    vector<int> integers;
    stringstream ss(str);
    char ch;
    int a;
    while(!ss.eof())
    {
        ss>>a>>ch;
        integers.push_back(a);
    }
    return integers;
}

int main()
{
    string str="22,24,26";
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
	{
        cout << integers[i] << "\n";
    }
    return 0;
}
