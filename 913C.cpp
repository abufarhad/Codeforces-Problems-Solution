#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll  n, m ,l ,  i, j, k, x;
    cin>>n>>l;
    ll a[n];
    for(i=0; i<n; i++)cin>>a[i];

    // to optimize the cost
    for(i=1; i<n; i++)
    {
        a[i]=min( a[i]  , 2*a[i-1] );
    }

    ll ans=1e18 , tmp=0;
    for(i=n-1; i>=0; i--)
    {
        x=(1<<i);
        tmp+= a[i]* (l/x);
        l%=x;

        ans=min(ans ,   tmp+ (l>0 )*a[i]  );
    }


    cout<<ans<<endl;
}

