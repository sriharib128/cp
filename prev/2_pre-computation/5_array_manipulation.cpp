// Starting with a 1-indexed array of zeros and a list of operations, for each operation add a value to each the array element between two given indices, inclusive. Once all operations have been performed, return the maximum value in the array.

//basic idea 
// [0,0,5,5,5,0,0] can be achieved by prefix sum of [0,0,5,0,0,-5,0]
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
long long int A[N];

int main(){
    int m,n;
    cin>>n>>m;
    while(m--){
        int a,b,k;
        cin>>a>>b>>k;
        A[a-1]+=k;
        A[b]-=k;
    }
    long long int max=0;
    for(int i=1;i<N;i++){
        A[i]+=A[i-1];
        if(max<A[i])
            max=A[i];
    }
    cout<<max<<endl;
}