#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

int main()
{
    ll m,n,i,j,k,ans=INT_MAX;
    cin>>n;
    ll a[n];
    fr1(i,n)cin>>a[i];

    fr1(i,n)  ans=min(ans, a[i]/ (max(i-1, n-i)) );
    cout<<ans<<endl;

}
