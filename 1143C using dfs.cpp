#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pb                  push_back
#define pn                  printf("\n")
vector<ll>v[100005], res;
ll par[100005], val[100005];
void dfs(ll s, ll d)
{
    ll flag=1;
    if(val[s]==0)flag=0;


    //for(ll now:v[s])cout<<now<<" "; pn;
    for(ll now:v[s])if(val[now]==0)flag=0;


    if(flag)res.pb(s);

    for(ll now:v[s])  dfs(now, s);

}
int main()
{
    ll i,j,k,n,x,y,rt;
    cin>>n;
    fr1(i,n)
    {
        cin>>x>>y;
        if(x==-1)
        {
            rt=i;
            val[i]=y;
            par[i]=0;
            continue;
        }
        par[i]=x, val[i]=y;
        v[x].pb(i);
    }

    dfs(rt, rt);

    sort(res.begin(), res.end());

    if(res.size())fr(i, res.size())cout<<res[i]<<" ";
    else cout<<"-1"<<endl;

}
