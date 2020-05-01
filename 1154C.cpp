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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 100006

int main()
{
    fast;
    ll t;

    ll m,n,a, b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;
    while(cin>>a>>b>>c)
    {

    ll cnt=0,ans=0,sum=0, mx=-1;

    cnt=min( a/3, min(b/2, c/2) )  ;
    x=a- cnt*3 , y=b - cnt*2, z=c -cnt*2;


    ans=cnt*7;
    a=x, b=y, c=z;
    cnt=0;

    while(a>0  or b>0 or c>0)
    {
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
    }
    //cout<<"sa "<<cnt<<endl;
    mx=max(mx, ans+cnt );

    cnt=0;
    a=x, b=y, c=z;

    while(a>0  or b>0 or c>0)
    {
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
    }
    //cout<<"su "<<cnt<<endl;
    mx=max(mx, ans+cnt );
    cnt=0;

    a=x, b=y, c=z;

    while(a>0  or b>0 or c>0)
    {
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
    }
    //cout<<"mo "<<cnt<<endl;
    mx=max(mx, ans+cnt );
    cnt=0;

    a=x, b=y, c=z;
    while(a>0  or b>0 or c>0)
    {
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
    }
    //cout<<"tu "<<cnt<<endl;
    mx=max(mx, ans+cnt );
    cnt=0;

    a=x, b=y, c=z;
    while(a>0  or b>0 or c>0)
    {
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
    }
    //cout<<"we "<<cnt<<endl;
    mx=max(mx, ans+cnt );
    cnt=0;

    a=x, b=y, c=z;
    while(a>0  or b>0 or c>0)
    {
        if(a) a--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
    }
    //cout<<"tr "<<cnt<<endl;
    mx=max(mx, ans+cnt );
    cnt=0;

    a=x, b=y, c=z;
    while(a>0  or b>0 or c>0)
    {
        if(c) c--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(a) a--, cnt++; else break;
        if(b) b--, cnt++; else break;
        if(c) c--, cnt++; else break;
        if(a) a--, cnt++; else break;
    }
    //cout<<"fr "<<cnt<<endl;
    mx=max(mx, ans+cnt );

    cout<<mx<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



