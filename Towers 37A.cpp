#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long


int main()
{

    ll m,n,t,i,a,mx=0,cnt[1008]={0};
    cin>>t;
    set<ll>s;

    for(i=0; i<t; i++)
    {
        cin>>a;
        s.insert(a);
        cnt[a]++;
        mx=max(mx, cnt[a]);

    }
    cout<<mx<<" "<<s.size();

    return 0;
}




