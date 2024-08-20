#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m;
    cin>>n>>m;
    // vector<long long int> p(n);
    multiset<long long int> p;
    for(long long int i=0;i<n;i++){
        long long int temp;
        cin>>temp;
        p.insert(temp);
    }
    for(long long int i=0;i<m;i++){
        long long int cur_max_price;
        cin>>cur_max_price;
        auto temp =p.begin();
        if(p.size()==0 || *(temp)>cur_max_price){
            cout<<-1<<endl;
            continue;
        }
        auto it = upper_bound(p.begin(),p.end(),cur_max_price);
        if(it==p.begin()){
            cout<<-1<<endl;
            continue;
        }
        it--;
        cout<<*it<<endl;
        p.erase(it);
    }

    return 0;
}