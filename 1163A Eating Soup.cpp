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
    ll m,n,i,j,k,ans;
    cin>>n>>k;

    if(k==0)ans=1;
    else if(k==n) ans=0;
    else
    {
        if(n/k  >= 2)ans=k;
        else ans=n-k;
    }

    pfl(ans);
}
