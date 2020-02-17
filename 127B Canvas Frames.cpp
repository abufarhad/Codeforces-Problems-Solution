#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

ll cnt[106];
int main()
{
    ll m,n,i,j,k,ans=0;
    cin>>n;
    ll a[n];

    vector<ll>v;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i] ]++;

    }


    for(i=1; i<=105; i++)   if(cnt[i]>=2 )v.push_back(cnt[i] );

    fr(i, v.size() )  ans+=(v[i]/2  );

    ans/=2;
    cout<<ans<<endl;

}
