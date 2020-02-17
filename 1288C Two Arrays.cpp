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
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
ll md=1e9+7;

ll f[1050];
void fac()
{
    f[0]=1;
    fr1(i, 1030)f[i]=f[i-1]*i, f[i]%=md;
}

ll bigmod(ll b, ll p)
{
    if(p==0)  return 1;
    if(p%2==1)  return ((b%md)*bigmod(b,p-1))%md;
    else
    {
        ll y=bigmod(b,p/2);
        return (y*y)%md;
    }
}

ll mod_inverse(ll n)
{
     return bigmod(n, md-2 );
}


ll nCr(ll n, ll r)
{
    return ( f[n]*  mod_inverse( f[r] )%md *  mod_inverse( f[ n-r] )%md )%md;
}

int main()
{
    fast;
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;
    fac();
    //fr(i, 11)cout<<f[i]<<" "; pn;

    while(cin>>n>>m)
    {
       x=2*m + (n-1);
       ll ans= nCr( x, n-1);
       pfl(ans);
    }


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


