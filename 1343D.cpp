#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n, k, i, j;
        cin>>n>>k;
        ll a[n];
        map<ll, ll> mp;
        fr(i, n)cin>>a[i] ;

        ll pref[2*k+10];
        memset(pref, 0, sizeof pref);
        fr(i, n/2)
        {
            ll l=min(a[i] , a[n-1-i] );
            ll r=max(a[i] , a[n-1-i]);

            mp[l+r]++;

            pref[l+1]++;
            pref[r+k+1]--;
        }

        fr1(i, 2*k+5)pref[i]+=pref[i-1];

        ll mn=1e18 , t_pair=n/2;
        for(i=2; i<=2*k; i++)
        {
            ll cnt0=mp[i];
            ll cnt1=pref[i]-cnt0;
            ll cnt2=t_pair - cnt1-cnt0;

            ll ans=cnt1+cnt2*2;

            mn=min(ans, mn);
        }

        cout<<mn<<endl;
    }
}
