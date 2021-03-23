#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006
vector<ll> v[N];
bool vis[N];
ll cnt=0;
ll distance_from_root[N] , sub_tree_sz[N] , nodes[N];

void dfs(ll src, ll dist)
{
    vis[src]=1;
    sub_tree_sz[src]=1;
    distance_from_root[src]=dist;

    for(auto now : v[src])
    {
        if(vis[now]==1 )continue;
        dfs(now , dist+1);

        sub_tree_sz[src]+=sub_tree_sz[now];
    }
}

bool cmp( ll a, ll b)
{
    ll cma=distance_from_root[a]-sub_tree_sz[a]+1 ,  cmb=distance_from_root[b]-sub_tree_sz[b]+1;
    return cma> cmb;
}

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    cin>>n>>k;
    fr(i,n-1)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    dfs(1, 0);

    fr1(i, n)cout<<i<<"  "<<distance_from_root[i]<<" "<<sub_tree_sz[i]<<endl;
    fr1(i, n)nodes[i]=i;

    sort(nodes+1 , nodes+n+1 ,  cmp);

     fr1(i, n)cout<<nodes[i]<<" "; pn;

    ll ans=0;
    fr1(i, k)
    {
        ll cma=distance_from_root[ nodes[i] ]-sub_tree_sz[nodes[i] ]+1;
        ans+=cma;
    }

    cout<<ans<<endl;



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



