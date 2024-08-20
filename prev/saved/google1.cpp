#include<bits/stdc++.h>
using namespace std;


string getPermutation(int A, int B) {
    vector<int> nums;
    int fact=1;
    for(int i=1;i<A;i++){
        if(fact*1LL*i <INT_MAX)
            fact=fact*i;
        nums.push_back(i);
    }
    nums.push_back(A);
    string ans ="";
    B = B-1;
    while (true){
        ans+=to_string(nums[B/fact]);
        nums.erase(nums.begin()+B/fact);
        B=B%fact;
        if(nums.size()==0)
            break;
        fact=fact/nums.size();
    }
    return ans;
}

int main(){
    int A,B;
    cin>>A>>B;
    cout<<getPermutation(A,B)<<endl;
}