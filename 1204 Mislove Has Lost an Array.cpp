//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006
ll po(ll a,ll b)
{
    ll ans=1;
    while(b--)  ans *= a;
    return ans;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    scl(x);
    scl(y);
    ll  a[100];
    for(i=0; i<=20; i++)a[i]=po(2,i );

   // fr(i, 10)cout<<a[i]<<" "; pn;

    vector<ll>v, v1;
    fr(i, min(x, n)) v.pb(a[i]);
    fr(i, min(y, n)) v1.pb(a[i]);

    //cout<<v.size()<<" "<< v1.size() <<endl;
    //cout<<v[v.size()-1 ]<<" "<<v1[v1.size()-1 ]<<endl;

    ll mn=0, mx=0;

    if(v.size() <n)
    {
        m=n-v.size();
        fr(i,m)v.pb(1);
    }

    if(v1.size() <n)
    {
        m=n-v1.size();
       // pfl(m);
        ll pp=v1[v1.size()-1 ];
        fr(i,m)v1.pb(pp );
    }

   // cout<<v.size()<<" "<< v1.size() <<endl;

    fr(i,v.size())mn+=v[i];//, cout<<v[i]<<" " ;pn;
    fr(i,v1.size())mx+=v1[i];//, cout<<v1[i]<<" " ; pn;
    cout<<mn<<" "<<mx<<endl;


    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

