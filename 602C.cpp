#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 500

ll v[N][N];

ll vis[N];
ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

ll bfs(ll x)
{
    fr(i, N)vis[i]=0;
    queue<ll>q;
    ll dist[N];

    fr(i, N)dist[i]=inf;
    q.push(1);

    dist[1]=0;
    while(!q.empty())
    {
        ll cur=q.front();
        q.pop();
        if(vis[cur])continue;

        //cout<<cur<<" - ";
        vis[cur]=1;
        fr1(i, n)
        {
            if(!vis[i]  and v[i][cur]==x)
            {
                q.push(i);
                dist[i]=min(dist[i]   , dist[cur]+1 );
            }
        }
    }

    if(!vis[n] )return -1;
    else return dist[n];
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>m;

        fr(i , N)fr(j, N)v[i][j]=2;  //bus route

        fr(i, m)                            //train route
        {
            scll(x, y);
            v[x][y]=1;
            v[y][x]=1;
        }

        ans=max(bfs(1)  , bfs(2) );

        if(bfs(1)==-1  or bfs(2)==-1 )cout<<-1<<endl;
        else pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
