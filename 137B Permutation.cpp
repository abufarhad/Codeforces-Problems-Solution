#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll n,m,mx=-1,k,i,j;
    cin>>n;
    set<ll>s;
    fr(i,n)cin>>k, s.insert(k), mx=max(mx, k);
    ll cnt=0;
    for(auto it: s)  if( it <=n)cnt++;

    cout<<n-cnt<<endl;
}
