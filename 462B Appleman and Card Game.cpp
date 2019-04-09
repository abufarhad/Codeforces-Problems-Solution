#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

#define N 100006
ll a[N];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    scl(k);
    char s;
    fr(i,n)
    {
        cin>>s;
        a[s-'A']++;
    }
    sort(a,a+26);
    for(i=25;i>=0;i--)
    {
        d=min(a[i], k);
        ans+=d*d;
        k-=d;
    }
    pfl(ans);
    return 0;
}




