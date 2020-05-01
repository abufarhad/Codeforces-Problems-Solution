
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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll m,n,a, b,c,d,i,j,k;
vector<ll>pos;

ll solve(ll l  , ll r )
{
    ll power_need , x, y, z;
    x=lower_bound(all(pos)  , l)- pos.begin();
    y=upper_bound(all(pos)  , r) -pos.begin();
    y--;

    z=y-x+1;
    if(z==0)power_need=a;
    else power_need=b*z*(r-l+1);

    if(l==r  or z==0)return power_need;

    ll mid=(l+r)/2;
    return min( power_need ,  ( solve(l, mid ) + solve(mid+1 , r ) ) );
}

int main()
{
    fast;
    cin>>n>>k>>a>>b;
    fr(i, k)cin>>m, pos.pb(m);

    ll l=1, r=1<<n;
    sort(all(pos));

    ll ans=solve(l , r);
    cout<<ans<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




