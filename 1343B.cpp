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
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl


int main()
{
    ll t;
    cin>>t;
   while( t--)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);
    ll a[n];
    y=n;
    y/=2;

    if(y%2==0)
    {
        pys;
        for(i=2; i<=n; i+=2)cout<<i<<" " , cnt+=i;
        for(i=1; i<n-1; i+=2)cout<<i<<" " , sum+=i;
        x=cnt-sum;
        cout<<x<<endl;
    }
    else pno;

    //cout<<ans;pn;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



