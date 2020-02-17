#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 200005

vector<ll> v[N];
bool vis[N];
ll a[N], b[N];


ll dfs(ll s)
{
    vis[s]=true;
    cout<<s<<" ";
    for(auto now: v[s])
    {
       if(!vis[now]) if(a[s]==now  or b[s]==now )dfs(now);
    }
}



int main()
{
    ll m,n,i,j,k;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        ll x, y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

        a[i]=x, b[i]=y;
    }

    dfs(1);


}
