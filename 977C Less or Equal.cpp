#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,i,j,k;
    cin>>n>>k;
    ll a[n];
    ll cnt=0, ans=0;
    fr(i,n)cin>>a[i];
    sort(a, a+n);

    if(k==0)ans=a[0]-1;
    else ans=a[k-1];


    fr(i,n) if(ans >= a[i])cnt++;

    if( ans<1 or cnt!=k)cout<<-1<<endl;
    else cout<<ans<<endl;

}
