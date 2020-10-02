#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m, n, i, j=-1;
    cin>>n;
    ll a[n];
    for(i=0; i<n; i++)  cin>>a[i];

    ll mn=0, sum=0, ans=0;

    fr(i, n)
    {
        ans+=a[i];
        mn=min(mn, ans);
    }
    mn=abs(mn);

    cout<<mn<<endl;
}
