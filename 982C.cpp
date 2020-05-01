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


#define N 100006
vector<ll>v[N];
ll n, ans=0;
ll sz[N];
bool vis[N];

ll dfs(ll s )
{
    sz[s]=1;
    vis[s]=1;
    for(ll i=0; i<v[s].size() ; i++)
    {
        ll u=v[s][i];
        if(!vis[u ])
        {
        dfs(u);
        //cout<<s<< " "<<u<<" "<<sz[s]<<" "<<sz[u]<<endl;
        sz[s]+=sz[u];
        }
    }

    if(sz[s]%2==0 and s!=1 )  ans++;
}



int main()
{

    ll t, x, y;
    ll cnt=0, sum=0;
    scl(n);

    fr(i,n-1)cin>>x>>y , v[x ].pb(y) , v[y].pb(x);

    if(n&1)cout<<-1<<endl;
    else  dfs(1 )  , cout<<ans<<endl;



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




