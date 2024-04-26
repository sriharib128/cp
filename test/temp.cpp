#include <bits/stdc++.h>
using namespace std;
const int num=1e5;

int sum(int A){
    if(A%10==0) 
        return 0;
    return (A%10 + sum(A/10));
}

int main(){
    int A = 12345;
    cout<<sum(A)<<endl;
}