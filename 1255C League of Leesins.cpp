//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

#define N 100006
bool vis[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll  a[n];
    set<ll>s;
    vector<ll> v;
    fr(i,n-2){cin>>x>>y>>z ; if(!vis[x] )v.pb(x), vis[x]=1; if(!vis[y] )v.pb(y), vis[y]=1; if(!vis[z] )v.pb(z), vis[z]=1;}

    fr(i, v.size())cout<<v[i]<<" ";
return 0;
}


