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
#define inf                 1e18
#define N 200006


int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;

        scl(n);
        ll a[n] , b[n];
        ll mn_a=inf , mn_b=inf , ans=0;

        fr(i,n)cin>>a[i] , mn_a=min(mn_a , a[i]);
        fr(i,n)cin>>b[i] ,  mn_b=min(mn_b , b[i]);

        fr(i, n)
        {
            if(mn_a<a[i]  and mn_b<b[i] )
            {
                x=a[i]-mn_a , y=b[i]-mn_b;
                ans+=min( x, y );
                ans+=( max(x, y)  - min(x, y) );
            }
            else if(mn_a<a[i] ) ans+=a[i]-mn_a;
            else if(mn_b<b[i]) ans+=b[i]-mn_b;

        }

        pfl(ans);

    }


return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
