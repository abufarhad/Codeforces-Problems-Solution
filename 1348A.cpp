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
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;
    ll a[n];
    vector<ll>v;

    fr1(i, n)
    {
        a[i]=1<<i;
        v.pb(a[i]);
        sum+=a[i];
    }

    x=n/2 , k=0;
    for(i=x; i<n; i++)cnt+=a[i];


    ans=sum-cnt;
    //pfl(ans) , pfl(cnt);

    ans=abs( ans- cnt);
    pfl(ans);
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




