
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
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)


int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=1,ans=0,sum=0,mx=-1;
    scl(n);
    ll a[n];
    fr(i,n)cin>>a[i];
    vector<ll> lf(n, 1);

    fr1(i, n-1)
    {
        if(a[i-1]<a[i]) lf[i]= lf[ i-1]+1;
        mx=max(mx, lf[i]);
    }

    vector<ll> ri(n, 1);

    for(i=n-2; i>=0; i--)
    {
        if(a[i] <a[i+1]  )ri[i]=ri[i+1]+1;
        mx=max(mx, ri[i]);
    }

   // fr(i, n)cout<<lf[i]<<" "; pn;

    //fr(i, n)cout<<ri[i]<<" "; pn;


    for(i=0; i<n-2; i++)   if(a[i]<a[i+2] )mx= max(mx, lf[i]+ri[i+2] );


    cout<<mx<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

