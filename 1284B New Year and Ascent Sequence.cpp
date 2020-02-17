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
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




#define N 100006

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    scl(n);

    vector<ll>almn, almx;

    fr(i,n)
    {
        cin>>m;
        ll mn=1e18, mx=0, flag=0;
        fr(j, m)
        {
            cin>>x;
            if(x>mn)flag=1;

            mn=min(mn, x);
            mx=max(mx, x);
        }
        if(flag==0)
        {
            cout<<i<<" - ";
            almn.pb(mn);
            almx.pb(mx);
        }
        pn;
    }

    fr(i, almn.size())cout<<almn[i]<<"-- ";
    pn;
    fr(i, almx.size())cout<<almx[i]<<"-- ";
    pn;

    sort(all(almn ));
    sort(all(almx ));

    ll sz=almn.size();
    fr(i, sz)cout<<almn[i]<<" "<<almx[i]<<endl;

    pn;

    fr(i, sz)
    {
        cout<<almn[i]<<" "<<almx[i]<<endl;

        ll val=almn[i]+1;

        x=lower_bound(almx.begin(), almx.end(), val)-almx.begin();

        cout<<val<<" "<<x<<endl;

        ans+=x;
        cout<<"ans "<<ans<<endl;
    }


    cout<<n*n-ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

