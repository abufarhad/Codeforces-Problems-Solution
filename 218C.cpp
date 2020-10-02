#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 100005

vector<pair<ll, ll> >v;
bool vis[N];
ll n;

void dfs(ll s)
{
    vis[s]=1;
    for(ll i=0;i<n;i++)
    {
        if(!vis[i]  and  (v[i].first == v[s].first or v[i].second == v[s].second )  )dfs(i );
    }
}

int main()
{
    ll i , j , m, x, y;
    ll cnt=0;

    cin>>n;
    for(i=0;i<n; i++)
    {
        cin>>x>>y;
        v.push_back({x, y});
    }

    memset(vis , 0 , sizeof vis);

    for(i=0;i<n; i++)
    {
        if(!vis[i] )
        {
            dfs(i);
            cnt++;
        }
    }

    cnt--;
    cout<<cnt<<endl;
}
