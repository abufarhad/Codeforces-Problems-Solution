#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

ll f[370], m[370];
int main()
{
    ll n,i,k,l,r,cnt=0,ans=0;
    cin>>n;
    char c;

    fr(i,n) {cin>>c>>l>>r; for(ll i=l; i<=r;i++)if(c=='F')f[i]++; else m[i]++;}

    fr1(i,366)  ans=max(ans, min(f[i], m[i]) );

    pfl(2*ans);
}
