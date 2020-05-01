#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)


map<ll , ll> cnt;

int main()
{
    ll m,n,i,j=0,res,x,y,p;

    cin>>n;
    ll a[n];

    ll sum=0, ans=0;

    fr(i, n)cin>>a[i] , ans+=a[i] , cnt[a[i] ]++;

    vector<ll>v;
    fr(i, n)
    {
        x=0;
        ans-=a[i];
        ll tmp=ans/2;
        if(cnt[a[i]]) x=1, cnt[a[i] ]--;

       if(ans%2==0 and  cnt[tmp] )v.push_back(i+1);

        ans+=a[i];
        if(x) cnt[a[i] ]++;
    }

    if(v.size())
    {
        cout<<v.size()<<endl;
        fr(i, v.size())cout<<v[i]<<" ";
    }
    else cout<<0<<endl;


}

