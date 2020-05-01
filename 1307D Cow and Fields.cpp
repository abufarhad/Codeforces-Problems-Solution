#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 +7;
const ll MAXN = 2e5 + 5;

vector<int>G[MAXN];

int a[MAXN];
int dis1[MAXN],disn[MAXN];
queue<int>q;
bool vis[MAXN];

void bfs(int st,int dis[])
{
    q.push(st);
    memset(vis,0,sizeof(vis));
    dis[st]=0;
    vis[st]=1;
    while(!q.empty())
    {
        int top=q.front();
        q.pop();
        for(auto v:G[top])
        {
            if(!vis[v])
            {
                dis[v]=dis[top]+1;
                q.push(v);
                vis[v]=1;
            }
        }
    }
}

vector<pair<int,int> >V;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1; i<=k; i++)
    {
        cin>>a[i];
    }
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    bfs(1,dis1);
    bfs(n,disn);

    int res=0;
    for(int i=1; i<=k; i++)
    {
        V.push_back({dis1[a[i]]-disn[a[i]],a[i]});
    }

    for(int i=0; i<V.size(); i++)
    {
        cout<<dis1[a[i+1]]<<" - "<<disn[a[i+1] ]<<endl;
        cout<<V[i].first<<" -- "<<V[i].second<<endl;
    }

    sort(V.begin(),V.end());

    cout<<"After Sorting\n";

    for(int i=0; i<V.size(); i++)
    {
        cout<<dis1[a[i+1]]<<" - "<<disn[a[i+1] ]<<endl;
        cout<<V[i].first<<" -- "<<V[i].second<<endl;
    }

    int ans=0;
    int tmp=0;
    for(int i=0; i<V.size(); i++)
    {
        if(i!=0)
        {
            ans=max(ans,tmp+disn[V[i].second]+1);
            cout<<"i>0 "<<V[i].second<<" "<<tmp<<" "<<disn[V[i].second]<<" "<<ans<<endl;
        }
        tmp=max(tmp,dis1[V[i].second]);
    }
    cout<<min(ans,dis1[n]);
    return 0;
}
