#include <bits/stdc++.h>
using namespace std;

int check(string s,string open_tag)
{   
    int flag =0;
    if(s[1] != '/' )
        return 0;
    for(int i=0;i<open_tag.size();i++)
        if(s[i+2]!=open_tag[i])
            return 0;
    return 1;
}

int main() 
{   
    vector <string> v;
    string s;
    int t=0;
    int n,q;
    cin>>n>>q;
    getline(cin,s);
    while(1)
    {
        cin>>s;
        if(s[0]!='<')
            break;
        if(s[0]=='<')
        {   
            string open_tag="";
            for(int i=1;i<s.size();i++)
                open_tag = open_tag+s[i];

            string temp_string="";
            
            while(1)
            {
                cin>>s;
                if(s=="break")
                    break;
                if(check(s,open_tag))
                    break;
                temp_string = temp_string+s;
            }
            v.push_back(temp_string);
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    while(q--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            string temp_string="";
            if(s[i]== '~')
                
        }
    }
    return 0;
}