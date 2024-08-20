#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);s.push(3);s.push(4);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    queue <string> q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    return 0;

}