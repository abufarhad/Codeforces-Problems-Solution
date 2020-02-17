
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"Monti valo nei "<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)	to_string(n)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};




#define N 1005
char a[N][N];
ll pos[N*N+5], vis[N][N];
ll n,m,k,ans;


void dfs(ll i, ll j, ll id)
{
    if(i==0 || j==0 || i==n+1 || j==m+1)return ;

    if(a[i][j]=='*')
    {
        ans++; return ;
    }

    if(vis[i][j] )return;

    vis[i][j]=id;

    dfs(i-1, j, id);
        dfs(i+1, j, id);
            dfs(i, j-1, id);
                dfs(i, j+1, id);
    return;

}
int main()
{
    fast;
    ll x, y;
    cin>>n>>m>>k;
    fr1(i, n)fr1(j, m)cin>>a[i][j];

    mem(vis, 0);

    fr1(i, k)
    {
        cin>>x>>y;
        ans=0;

        if(!vis[x][y]) dfs(x, y, i);
        else ans=pos[vis[x][y] ];

        pos[i]=ans;
        cout<<ans<<endl;
    }

return 0;
}


