#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define asort(a)            sort(a,a+n)
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(q);
    while(q--)
    {
        scl(n);scl(k);
        ll  a[n];
        fr(i,n)cin>>a[i];
        asort(a);
        ll mid=k+a[0];

        if(abs(mid-a[0])<=k and abs(mid-a[n-1])<=k )ans=mid; else ans=-1;

        pfl(ans);
    }
    return 0;
}



