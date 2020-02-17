
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

#define N 100005
vector<ll>v[N];
bool vis[N];

ll m,n,b,c,d,i,j,k,y, e;
ll cnt=0;
ll par[N], dis[N];

ll dfs(ll s ,ll x)
{
  dis[s]=x;
  vis[s]=true;

  for(auto it:v[s])
  {
      if(!vis[it]) par[it]=s, dfs( it, x+1);

      ll dist=abs( dis[it]  -dis[s] );
      if(dist>=k)
      {
          ll ans=dist+1;
          it=s;
          cout<<ans<<endl;

          while( ans!=0)
          {
              cout<<it<<" ";
              it=par[it];
              ans--;
          }
          exit( 0);
      }
  }
}


int main()
{
    fast;
    ll t;

    cin>>n>>e>>k;
    ll x, y;
    fr(i, e)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    ll pos=-1, ans=0, len;

    fr1(i, n) if(!vis[i] ) dfs(i, 1);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



