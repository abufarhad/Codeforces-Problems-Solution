#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define N 200005

int main()
{
    ll k;
    cin>>k;
    while(k--)
    {
        ll m,n,i,j,x,y;
        cin>>n;
        vector<ll> v(n+1, 0);
        ll a[n];
        fr1(i,n)cin>>a[i];
        ll ans=n+1;
        fr1(i, n)
        {
            if(v[ a[i] ]>0)
            {
                x=i- v[a[i] ]+1;
                ans=min(ans, x);
            }
            v[ a[i]]=i;
        }

        if(ans>n)ans=-1;
        cout<<ans<<endl;

    }
}
