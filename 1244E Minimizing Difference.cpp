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
    for(i=1;i<=n/2;i++)
    {
        ll j=n-i+1;
        ll cnt=( (a[i+1]-a[i])  +  (a[j] -a[j-1]) )*i;
        /*
         Example :
         a[7]= 1 1 1 2 4 6 8
         cnt=( 1-1 + 8-6)=2*1=2   now 1 1 1 2 4 6 (8-2)
         cnt=( 1-1 + 6-4)=2*2=4   now 1 1 1 2 4 (6-2) (6-2)
         cnt=( 2-1 + 4-2)=3*3=9   now (1+1) (1+1) (1+1) 2 (4-2) ( 4-2)  (4-2)  = 2 2 2 2 2 2 2
        */
cout<<cnt<<" "<<k<<endl;
        if(cnt<=k)k-=cnt;
        else
        {
            cout<<a[j]<<" "<<a[i]<<" "<<k<<endl;
            ll ans=(a[j] - (a[i] +k/i) );
            cout<<ans<<endl; return 0;
        }
    }
    cout<<0<<endl;

}
