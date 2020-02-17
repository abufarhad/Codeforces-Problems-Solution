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

map<ll, ll> mp;

int main()
{
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0, zro=0, od=0, ev=0;
    scl(n);
    ll *a=new ll[n+1]();  //automatic initialize to zero

    set<ll> s;

    fr(i,n)
    {
        cin>>a[i];
        if(a[i]==0)zro++;
        else  mp[a[i]] ++, s.insert( abs( a[i] ) );
    }
    //cout<<od<<" "<<ev; pn;

    for(auto it: s)  ans+= mp[ it ]* mp[-it ];
    ans+=( zro*(zro-1))/2  ;

    cout<<ans<<"\n";


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

