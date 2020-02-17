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
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)


int main()
{
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;


    cin>>t;
    while(t--)
    {
        ll cnt=0,ans=0,sum=0;
        ll a[5];
        fr(i,3)cin>>a[i];


        ans=(a[0]+a[1]+a[2])/2;
        ans=min(ans, a[0]+a[1]);
        ans=min(ans, a[0]+a[2]);
        ans=min(ans, a[2]+a[1]);
        cout<<ans<<endl;

    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

