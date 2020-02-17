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
ll calc(ll n)
{
    return n*(n+1)/2;
}

int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>m;

    ll ttal=calc(n);

    ll zro=n-m;
    ll blk=(m+1);
    //cout<<"blk zro "<<blk<<" "<<zro<<endl;

    if(m==0){cout<<0<<endl;continue;}
    if(blk <= zro)
    {
        ll per_blk=zro/blk;

        //cout<<"per_blk"<<" "<<per_blk<<endl;

        x=y=0;
        ll baki=0, extra=0;

        extra=zro-blk*per_blk;
        baki=blk-extra;

        //cout<<"extra baki "<<extra<<" "<<baki<<endl;

        x=baki*calc(per_blk);
        y=extra*calc(per_blk+1);

        ans=ttal-x-y;
    }
    else  ans=ttal-zro;

    cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




