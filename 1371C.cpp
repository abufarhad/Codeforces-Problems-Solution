#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll a, m,n,b,c,d,i,j,k,x,y,z,l,r, p, s,f, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>a>>b>>f>>s;

        if(a+b>=(f+s)   and min(a, b)>=s )pys;
        else pno;
    }

return 0;
}
