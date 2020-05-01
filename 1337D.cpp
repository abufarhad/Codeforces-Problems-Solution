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
#define all(x) 	            (x).begin(), (x).end()
#define inf 9e18
ll ans , cnt=0;

ll sq(ll x){ return 1ll*x*x; }

void solve(vector<ll>a, vector<ll>b, vector<ll>c)
{

    for(auto x: a)
    {
        auto low=lower_bound(all(b) , x);
        auto high=upper_bound(all(c) , x);

        if( low==b.end()  or high==c.begin() ) { continue;}  // Must be try to take its little bigger or equal((lower_bound) or little smaller or equal (so , upper_bound - 1 )
        high--;

        ans=min(ans, sq(x-*low)+sq(*low- *high)+sq( *high-x) );

    }
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

    ll x, y, z , k;
    cin>>x>>y>>z;
    vector<ll>r, g, b;

    fr(i, x)cin>>k , r.pb(k);
    fr(i, y)cin>>k , g.pb(k);
    fr(i, z)cin>>k , b.pb(k);

    sort(all(r)), sort(all(g)) , sort(all(b));

    ans=inf;
    solve(r, g, b); solve(r, b, g);
    solve(g, b, r); solve(g, r, b);
    solve(b, r, g); solve(b, g, r);
    cout << ans << endl;
    }
    return 0;
}
///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



