#include<bits/stdc++.h>
using namespace std;

#define ll long  long
map<ll, ll> mp;

int main()
{
    ll m, n, i, j;
    ll t;

    ll sm=0 , mx=0, ans=0;
    mp[0]=1;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>m;
        sm+=m;

        cout<<mx<<" "<<sm<<endl;
        mx=max(mx, mp[sm]);

        cout<<ans<<" "<<i<<" "<<mx <<" "<<mp[sm]<<endl;
        ans+=i-mx;
        mp[sm]=i+1;
    }
    cout<<ans<<endl;
}

