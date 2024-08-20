#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &g,int v,vector<int>&visited){
    visited[v]=1;
    int flag=0;
    for(int i=0;i<g[v].size();i++){
        if(visited[g[v][i]]==0)
            dfs(g,g[v][i],visited);
    }   
    return;
}

int main(){
    int n,e;
    cin>>n>>e;
    vector<vector<int>> g(n);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        g[u-1].push_back(v-1);
        g[v-1].push_back(u-1);
    }
    vector<int> visited(n,0);
    int t =0;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            ct+=1;
            dfs(g,i,visited);
        }
    }
    cout<<ct<<endl;
}