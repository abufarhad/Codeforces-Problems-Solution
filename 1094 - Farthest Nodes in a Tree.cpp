//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)              cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x)              (x).begin(), (x).end()
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
#define pcas(i)             cout<<"Case "<<i<<": ";
#define fast    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define conv_string(n)  to_string(n)
#define N 300006
vector<ll>v[N], cost[N];
bool vis[N];
ll dist[N];

void bfs(ll src)
{
    queue<ll>q;
    fr(i, N)vis[i]=0,dist[i]=0;
    q.push(src);
    dist[src]=0;
    vis[src]=1;

    while(!q.empty())
    {
        ll top=q.front();
        q.pop();

        for(ll i=0;i<v[top].size();i++)
        {
            ll it=v[top][i];
            if(!vis[it])vis[it]=1, dist[it]=dist[top]+cost[top][i], q.push(it);
        }
    }
}

int main()
{
    fast;
    ll t;
    scl(t);
    tcas(cs, t)
    {
        ll n,x,y,z;
        cin>>n;
        fr(i, n-1)
        {
            cin>>x>>y>>z;
            v[x].pb(y);
            v[y].pb(x);

            cost[x].pb(z);
            cost[y].pb(z);
        }

        bfs(0);
        ll mx=-1, nxt_srt;
        fr(i, n)   if(dist[i]> mx)mx=dist[i], nxt_srt=i;

        bfs(nxt_srt);
        mx=-1;

        fr(i, n)   if(dist[i]> mx)mx=dist[i];

        cout<<"Case "<<cs<<": "<<mx<<endl;
        fr(i,n)v[i].clear() , cost[i].clear();
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


