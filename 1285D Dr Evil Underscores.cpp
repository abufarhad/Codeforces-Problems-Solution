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
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)



#define N 100006

ll solve(vector<ll>&v, ll bit)
{
    if(bit<0)return 0;
    vector<ll>on, off;

    for(auto now: v)
    {
        if(now & 1<<bit )on.pb(now);
        else off.pb(now);
    }

    if(on.size()==0) return solve( off, bit-1);
    if(off.size()==0) return  solve( on, bit-1);

    return (1<<bit) + ( min( solve(on, bit-1 )  , solve(off, bit-1) ) );
}




int main()
{
    fast;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    while(cin>>n)
    {
    ll cnt=0,sum=0;
    vector<ll>a;

    fr(i, n)cin>>x, a.pb(x);

    ll ans=solve(a, 30);

    cout<<ans<<endl;


    }

return 0;
}

/*
For min val
    1 0
    1 0
    ----
    0 0
............................

    1 0
    0 1
    ----
    min(on, off)+2^bit

*/


///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




