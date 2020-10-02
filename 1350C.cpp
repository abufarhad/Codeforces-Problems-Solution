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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;

#define N 100006

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    while(cin>>n)
    {
    ll a[n];

    fr(i,n)cin>>a[i];

    ll suffix_gcd[n];

    suffix_gcd[n-1]=a[n-1];
    for(i=n-2 ; i>=0; i--)
    {
        suffix_gcd[i]=__gcd(suffix_gcd[i+1] , a[i] );
    }
    ll gcd[n];

   // fr(i, n)cout<<suffix_gcd[i]<<" "; pn;

    for(i=1; i<n; i++)
    {
        gcd[i]= (suffix_gcd[i] * a[i-1]  )/ suffix_gcd[i-1] ;
    }

    //fr1(i, n-1)cout<<gcd[i]<<" "; pn;

    ans=gcd[1];

    for(i=1; i<n; i++)ans=__gcd( ans , gcd[i]);

    cout<<ans;pn;
    }

return 0;
}

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1



