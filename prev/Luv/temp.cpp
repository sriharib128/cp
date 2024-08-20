#include <bits/stdc++.h>
using namespace std;

int check_set(vector<vector<int>>&arr,int i, int j){
    int m =0;
    if(i>0)
        m = max(m,arr[i-1][j]);
    if(i<arr.size()-1)
        m = max(m,arr[i+1][j]);
    if(j>0)
        m = max(m,arr[i][j-1]);
    if(j<arr[0].size()-1)
        m = max(m,arr[i][j+1]);
    // cout<<i<<"-"<<j<<"--"<<m<<endl;
    return min(m,arr[i][j]);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        // int ct=1;
        // while(ct!=0){
        //     ct=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    int temp = check_set(arr,i,j);
                    // if(temp!=arr[i][j]) ct++;
                    arr[i][j] = temp;
                }
            }
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<arr[i][j]<<" ";
            cout<<endl;
        }
    }
}