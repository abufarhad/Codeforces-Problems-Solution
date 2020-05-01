//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll ans=0,sum=0;
    scl(n);
    ll a[n];
    map<ll, ll>mp;

    fr(i,n)cin>>a[i] , mp[a[i] ]++;

    ll mx=-1;
    fr(i, n)mx=max(mx, mp[a[i] ] );
    cout<<mx<<endl;
return 0;
}



