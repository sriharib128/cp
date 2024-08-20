//COUNT SUBSTRINGS
// https://www.codechef.com/problems/STRSUB
#include <bits/stdc++.h>
using namespace std;
long int ct_0[100001];
long int ct_1[100001];
long long int K;

long int to_max_substring(long long int start,long long int end)
{
    if(end==start)
        return end;
    long long int temp_start =start;
    while((end-temp_start)>1)
    {
        long long int mid = (temp_start+end)/2;
        if((ct_0[mid] - ct_0[start-1] <= K) && (ct_1[mid] - ct_1[start-1] <= K))
        {
            temp_start = mid;
        }
        else
        {
            end = mid;
        }
    }
    if((ct_0[end] - ct_0[start-1] <= K) && (ct_1[end] - ct_1[start-1] <= K))
        return end;
    else
        return temp_start;
}
long int search_Bound(long int to_substring [],long int start,long int end)
{
        if(end==start)
        return end;
    long int R=end;
    while((end-start)>1)
    {
        long long int mid = (start+end)/2;
        if(to_substring[mid]<=R)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    if(to_substring[end]<=R)
        return end;
    else
        return start;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N,Q;
        cin>>N>>K>>Q;
        char s[N+1];
        scanf("%s",s);
        ct_1[0]=0;
        ct_0[0]=0;
        for(long int i=1;i<(N+1);i++)
        {
            ct_1[i]=ct_1[i-1];
            if(s[i-1]=='1')
                ct_1[i]+=1;
            ct_0[i]=i-ct_1[i];
        }
// precomputed number of 0's and 1's

        long int to_substring[N+1];
        for(long int i=1;i<=N;i++)
        {
            to_substring[i]= to_max_substring(i,N);
            // printf("to_substring[%ld] = %ld\n",i,to_substring[i]);
        }
//computed max string u can go to from i
        long int possible_substrings[N+1];
        long int prefix[N+2];
        prefix[N+1]=0;        
        for(long int i=1;i<=N;i++)
        {
            possible_substrings[i]= to_substring[i]-i+1;
        }
        // for(long int i=1;i<=N;i++)
        //     printf("possible[%ld]=%ld\n",i,possible_substrings[i]);
        // printf("\n");
        for(long int i=N;i>0;i--)
            prefix[i] = possible_substrings[i]+prefix[i+1];

        // for(long int i=1;i<=N+1;i++)
        //     printf("prefix[%ld]=%ld\n",i,prefix[i]);

//computed max num of substring u can get from i to N
        while (Q--)
        {   
            long int L,R;
            scanf("%ld %ld",&L,&R);
            long int i= search_Bound(to_substring,L,R);//only some of the possible substrings from i+1 should be included
            // cout<<i<<endl;
            long int ans=0;
            
            if(i<R && i>L)
            {
                ans += prefix[L]-prefix[i+1];//addding all possible substrings from L to I
                //now we have to add some of the possible substrings from i+1 to R;
                long int diff = R-i; // diff = R-(i+1)+1
                ans += (diff)*(diff+1)/2;
            }
            else if(i==L)
            {
                if(to_substring[i]>=R)
                {
                    long int diff = R-i+1; //2 to 4; (2,2 2,3 2,4) (3,3 3,4) (4,4)
                    ans += (diff)*(diff+1)/2;
                }
                else
                {
                    long int diff = (R)-(i+1)+1; // diff = R-(i+1)+1
                    ans += (diff)*(diff+1)/2;
                    ans+=possible_substrings[i];
                }
                
            }
            else
            {
                ans += prefix[L]-prefix[i];
                ans += 1;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

/*
    3 to 4
    3,3 3,4 4,4 = 2 +1
    3 to 6
    (3,3 3,4 3,5 3,6) (4,4 4,5 4,6) (5,5 5,6) (6,6)= 4+3+2+1 = sum(6-3+1)
*/