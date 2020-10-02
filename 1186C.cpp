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

#define N 1000006

ll cmsm[N];
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string a, b , s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;

        cin>>a>>b;
        fr(i , a.size()) cmsm[i+1]=cmsm[i]+ (a[i]-'0');

        fr(i , b.size())cnt+=b[i]-'0';

        //fr1(i , a.size())cout<<cmsm[i]<<" "; pn;

        ll sz=b.size();
        fr1(i , a.size())
        {
            if(sz+i-1>a.size())continue;
            sum=cmsm[sz+i-1]-cmsm[i-1];
            if( sum%2 == cnt%2)ans++;
        }

        pfl(ans);

    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



