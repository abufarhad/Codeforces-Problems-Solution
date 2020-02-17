
///Unfinished
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define pb                  push_back
#define N 100005
vector<ll>v[N];
bool vis[N];
bool dfs( ll n )
{
    ll k=0;
    vis[n]=1;
    fr(i, v[n].size())
    {
        k++;
        if(!vis[ v[n][i]  ] ) dfs(v[n][i] );
        if(k>1)   return 0;
    }
    return 1;
}

int main()
{
    ll m,n,i,j=0,k,l,cnt=0,sum=0,x,y;
    cin>>n;
    ll r[n], g[n], b[n];
    fr(i,n)cin>>r[i];
    fr(i,n)cin>>g[i];
    fr(i,n)cin>>b[i];


    ll tmp[n], tmp1[n], ans[n];

    fr(i,n-1)
    {
        cin>>x>>y;
        v[x].pb(y), v[y].pb(x);
    }
    if(dfs(0))
        cout<<-1<<endl;
    else
    {
        fr(i,n)
        {
            if(i%3==0){
                    ll mn=min{r[i], g[i], b[i] };

            if(r[i]<=g[i] and r[i]<=b[i])  sum+=r[i], ans[i]=i;
            if(g[i]<=r[i] and g[i]<=b[i])  sum+=g[i], ans[i]=i;
            if(b[i]<=r[i] and b[i]<=g[i])  sum+=b[i], ans[i]=i;
            }
            else if(i%3==1)
            {

            }
        }
        cout<<sum<<endl;
        fr(i,n)cout<<ans[i]<<" ";
    }
}
