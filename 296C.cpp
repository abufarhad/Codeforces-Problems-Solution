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
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")
#define N 100006

ll cmsm[N] , a[N] , inc[N], l[N] , r[N] , ans[N];
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,z, x, y, p, q;
        ll cnt=0,cn=0,sum=0 ;

        cin>>n>>m>>k;

        fr1(i,n)cin>>a[i];

        fr1(i , m)
        {
            scll( l[i]  , r[i] );
            scl(inc[i]);
        }

        fr1(i , k)
        {
            scll(x, y);

            cmsm[x ]++;
            cmsm[ y+1 ]--;
        }

        fr1(i , m)cmsm[i]+=cmsm[i-1];

        fr1(i , m)
        {
            ans[ l[i] ]  += cmsm[ i ] * inc[ i ];
            ans[ r[i]+1 ]  -= cmsm[ i ] * inc[ i ];
        }

        fr1(i , n)ans[i]+=ans[i-1];

        fr1(i , n)cout<<ans[i] + a[i] <<" "; pn;

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



