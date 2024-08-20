#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;


// long long int max_diff(vector<int> arr, int start, int end){
//     if(start==end) return arr[start];
//     if(dp[start][end]!=-1) return dp[start][end];
//     //p1 picks the 1st element;
//     long long int player_1 = arr[start] - max_diff(arr,start+1,end);
//     //p2 picks 2nd element;
//     player_1 = max(player_1,arr[end]-max_diff(arr,start,end-1));
//     return  dp[start][end]=player_1;
// }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    long long int dp[n][n];
    memset(dp,0,sizeof(dp));
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        dp[i][i]=arr[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i+1;j<n;j++){
            dp[i][j]=max(arr[i]-dp[i+1][j], arr[j]-dp[i][j-1]);
        }
    }
    int start = 0;
    int end = n-1;
    long long int ans = dp[start][end];
    cout<<(sum+ans)/2<<endl;
}