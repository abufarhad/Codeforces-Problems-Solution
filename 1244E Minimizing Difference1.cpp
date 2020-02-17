#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j,k;
    cin>>n>>k;
    ll a[n+5];
    fr1(i,n)cin>>a[i];
    sort(a+1, a+n+1);
    ll l=1, r=n;
    while(1)
    {
        while(l+1<n and a[l]==a[l+1])l++;
        while(r-1>=1 and a[r]==a[r-1])r--;

        if(l>=r){cout<<0<<endl;return 0;}
        ll aa=l, b=n-r+1;

        if(aa<=b)
        {
            ll nxt=a[l+1];
            ll cnt=(nxt- a[l] )*aa;
            if(cnt<=k)k-=cnt;
            else
            {
                ll ans=a[r]-( a[l]+(k/aa) );
                cout<<ans<<endl; return 0;
            }
            l++;
        }
        else
        {
            ll pre=a[r-1];
            ll cnt=(a[r] - pre )*b;
            if(cnt<=k)k-=cnt;
            else
            {
                ll ans=a[r]-( a[l]+(k/b) );
                cout<<ans<<endl; return 0;
            }
            r--;
        }

        if(k==0)break;
    }
    cout<<a[r]-a[l]<<endl;
}
