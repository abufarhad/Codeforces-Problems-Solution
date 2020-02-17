#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back

vector<ll> v[200005];
ll degree[200005];
vector<ll> cur_grp;
bool vis[200005];

ll dfs(ll s)
{
    vis[s]=1;
    cur_grp.pb(s);

    fr(i, v[s].size())
    {
        ll u=v[s][i];
        if(!vis[u])dfs(u);
    }
}

int main()
{
    ll m,n,i,j,k, x, y, src=0, dest=0, cnt=0;
    cin>>n>>m;

    fr(i,m)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
        x--, y--;
        degree[x]++, degree[y]++;
    }

    memset(vis, 0, sizeof(vis));

    fr(i, n)
    {
        if(!vis[i])
        {
            cur_grp.clear();
            dfs(i);
            bool flag=1;
            fr(j,cur_grp.size())
            {
                if(degree[i]==2)continue;
                else {flag=0;break;}
            }
            if(flag)cnt++;
        }
    }

    cout<<cnt<<endl;
}
