#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back

vector<ll>v[200005];
ll c[ 200005];
bool mark[2000005 ];
map<ll,ll>mp;

void dfs(ll n)
{
    mark[ n ]=1;
    mp[c[n] ]++;

   for(auto i: v[n])if(!mark[i] )dfs(i);

// fr(i,v[n].size() ) {   ll nd=v[n][i];   if(! mark[nd])   dfs(nd );}

}

int main()
{
    ll m,n,i,j,k,l,a,b;
    cin>>n>>m>>k;
    ll ans=0;

    fr1(i,n)cin>>c[i];
    fr1(i,m)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }

    fr1(i,n)
    {
        if(! mark[i] )
        {
            dfs( i);
           ll mx=0, sum=0;
            for( auto it : mp )
            {
                mx=max(mx, it.second );
                sum+=it.second;                     ///Adding  all conncted graph nodes
            }
            ans+=sum-mx;
            mp.clear();
        }
    }
    pfl(ans);
}
