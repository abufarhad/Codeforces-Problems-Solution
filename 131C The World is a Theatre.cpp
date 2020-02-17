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

ll dp[100][100];

ll ncr(ll n,ll r)
{
    if(n==r or r==0)  return 1;
    if(r>n)    return 0;
    if(dp[n][r]!=-1)   return dp[n][r];
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}

int main()
{
    ll t;
    memset(dp, -1, sizeof dp);
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    cin>>n>>m>>t;
    ll ans=0;

    for(i=4; i<t  ; i++)   ans+=ncr(n, i)* ncr(m, (t-i) );

    pfl(ans);

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


