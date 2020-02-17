#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
map<ll, ll> mp, mp1;
int main()
{
    ll m,n,i,j,k,l,x,y,ans=0;
    cin>>n;
    fr(i,n)
    {
        cin>>x>>y;
        ans+=mp[x+y]++, ans+=mp1[x-y]++;
    }
    cout<<ans<<endl;
}
