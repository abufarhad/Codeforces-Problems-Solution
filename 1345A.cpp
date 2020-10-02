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
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define N 90005
vector<ll>v;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>m;
        if(n==1 or m==1  or (n==2 and m==2 ))pys;
        else pno;
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

