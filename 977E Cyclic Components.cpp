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
    for(auto it: v[s])if(!vis[it])dfs(it);
}

int main()
{
    ll m,n,i,j,k, x, y, src=0, dest=0, cnt=0;
    cin>>n>>m;

    fr(i,m)
    {
        cin>>x>>y;
        //x--, y--;
        v[x].pb(y);
        v[y].pb(x);

        degree[x]++, degree[y]++;
    }

   // fr1(i,n)cout<<i<<" - "<<degree[i]<<endl;

    memset(vis, 0, sizeof(vis));

    fr1(i, n)
    {
        if(!vis[i])
        {
            cur_grp.clear();
            dfs(i);
            bool flag=1;

            //fr(j, cur_grp.size())cout<<cur_grp[j]<<" "; cout<<endl;

            for(auto j: cur_grp)
            {
                if(degree[j]!=2){  flag=0;break;}
            }
            if(flag)cnt++;
        }
    }

    cout<<cnt<<endl;
}
