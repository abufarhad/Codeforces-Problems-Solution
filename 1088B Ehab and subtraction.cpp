#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,b;
    set<ll>s;
    vector<ll>v;
    cin>>n>>m;
    ll arr[n];

    fr(i,n)
    {
        cin>>arr[i];
        s.insert(arr[i] );
    }

    set< ll > :: iterator it;
    for(it = s.begin(); it != s.end(); it++)
        v.pb(*it);

    ll ans=v[0];

    fr(i,m)
    {
        if(v.size()>i)
        {
            cout<<ans<<endl;
            ans=v[i+1]-v[i];
        }
        else
            cout<<"0"<<endl;
    }

}
