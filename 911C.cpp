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
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define N 100006
ll cnt[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll ans=0,sum=0 ;
    cin>>x>>y>>z;
    cnt[x]++ , cnt[y]++ , cnt[z]++;

    if(cnt[1] or cnt[2]>=2 or cnt[3]==3 or (cnt[2]==1 and cnt[4]==2  ) )pys;
    else pno;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



