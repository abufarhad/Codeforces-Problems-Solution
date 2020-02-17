#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back

vector<ll> v[105];
vector<ll> res;
bool vis[105], label[105];

ll dfs(ll s, ll d)
{
    vis[s]=1;
    label[d]=1;
    res.pb(s);

    fr(i, v[s].size())
    {
        ll u=v[s][i];
        if(!vis[u])dfs(u, d+1);
    }
}

int main()
{
    ll m,n,i,j,k;
    cin>>n;
    ll a[n+1];

    fr(i,n)cin>>a[i];

    fr(i,n-1)
    {
        for(j=i+1; j<n;j++)
        {
            if(a[i]*2==a[j]   )v[i].pb(j);
            else if(a[j]*2==a[i]   )v[j].pb(i);
            else if( a[i]/3==a[j]  and a[i]%3==0 ) v[i].pb(j) ;// , cout<<i<<" - "<<j<<" "<<a[i]<<" "<<a[j]<<endl ;
            else if( a[j]/3==a[i]  and a[j]%3==0 ) v[j].pb(i) ;// cout<<i<<" -- "<<j<<" "<<a[i]<<" "<<a[j]<<endl ;
        }
    }


    fr(i,n)
    {
        memset(vis, 0, sizeof(vis));
        memset(label, 0, sizeof(label));
        //fr(i,res.size())cout<<res[i]<<" "; cout<<endl;

        res.clear();
        dfs(i,0);

        if(label[n-1])
        {
        fr(j,n)cout<<a[ res[j] ]<<" ";
        break;
        }
    }
}
