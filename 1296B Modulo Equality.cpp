#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)


int main()
{
    ll m,n,i,j,k ,t;

    while( cin>>n>>m)
    {
        ll a[n], b[n];
        fr(i, n)cin>>a[i];
        fr(i,n)cin>>b[i];
        ll x, y;
        sort(a, a+n), sort(b, b+n);

        ll dif[n];
        ll mn=1e15;
        set<ll> s;
        fr(i, n)dif[i]=b[i]-a[i], s.insert(dif[i]);
        vector<ll> v;

        for(auto it: s)v.push_back(it);



        ll cnt=0;
        fr(i, n)if(b[i]-a[i]==0)cnt++;

        if(cnt==n)cout<<0<<endl;
        else
        {
            if(v[0]!=0)mn=v[0]; else mn=v[1];
            cout<<mn<<endl;
        }
    }
}
