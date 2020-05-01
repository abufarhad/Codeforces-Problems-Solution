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
#define md                  998244353
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006
ll f[N];


void fact()
{
    f[0]=1;
    fr1(i, N)
    {
        f[i]=f[i-1]*i;
        f[i]%=md;
    }
}

ll bigmd(ll b, ll p)
{
    if(p==0) return 1;
    if(p%2==1) return ((b%md)*bigmd(b,p-1))%md;
    else
    {
        ll y=bigmd(b,p/2);
        return (y*y)%md;
    }
}

ll nCr(ll n, ll r)
{
    return (f[n] *(  bigmd((f[r] * f[n-r])%md, md-2 ) ));
}

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0,sum=0;
    fact();

    cin>>n>>m;

    if(n==2){cout<<0<<endl; return 0;}
    x=bigmd(2, n-3)%md ;

    ans=( (nCr(m, n-1)%md * x)%md  * (n-2)%md )%md;
    cout<<ans<<endl;

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


