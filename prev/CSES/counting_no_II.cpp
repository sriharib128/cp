#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> c(n);
    vector<int> no_index(n);
    for(int i=0;i<n;i++){
        cin>>c[i];
        no_index[c[i]-1] =i;
    }
    int ct=0;
    for(int i=1;i<n;i++){
        if(no_index[i]<no_index[i-1])
            ct++;
    }
    ct++;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;
        b--;
        bool next_g_a=1;
        bool next_g_b=1;
        bool prev_l_a=1;
        bool prev_l_b=1;

        if(c[a]<no_index.size()-1 && no_index[c[a]]>no_index[c[a]+1])
            next_g_a =0;
        if(c[a]>0 && no_index[c[a]]<no_index[c[a]-1])
            prev_l_a =0;
        if(c[b]<no_index.size()-1 && no_index[c[b]]>no_index[c[b]+1])
            next_g_b =0;
        if(c[b]>0 && no_index[c[b]]<no_index[c[b]-1])
            prev_l_b =0;
        swap(c[a],c[b]);
        swap(no_index[c[a]],no_index[c[b]]);

        bool next_g_new_a=1;
        bool next_g_new_b=1;
        bool prev_l_new_a=1;
        bool prev_l_new_b=1;

        if(c[a]<no_index.size()-1 && no_index[c[a]]>no_index[c[a]+1])
            next_g_new_a=0;
        if(c[a]>0 && no_index[c[a]]<no_index[c[a]-1])
            prev_l_new_a =0;
        if(c[b]<no_index.size()-1 && no_index[c[b]]>no_index[c[b]+1])
            next_g_new_b =0;
        if(c[b]>0 && no_index[c[b]]<no_index[c[b]-1])
            prev_l_new_b =0;

        // ct+=(next_g_a-next_g_new_a);
        // ct+=(next_g_b-next_g_new_b);
        // ct+=prev_l_new_a-prev_l_a;
        // ct+=prev_l_new_b-prev_l_b;
        if(next_g_a==0 && next_g_new_a==1)
            ct--;
        if(next_g_b==0 && next_g_new_b==1)
            ct--;
        if(next_g_a==1 && next_g_new_a==0)
            ct++;
        if(next_g_b==1 && next_g_new_b==0)
            ct++;
        
        if(prev_l_a==0 && prev_l_new_a==1)
            ct--;
        if(prev_l_b==0 && prev_l_new_b==1)
            ct--;
        if(prev_l_a==1 && prev_l_new_a==0)
            ct++;
        if(prev_l_b==1 && prev_l_new_b==0)
            ct++;
        cout<<ct<<endl;
    }
}