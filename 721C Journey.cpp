#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>


using namespace std;

#define ll long long
#define ulli  unsigned ll int


#define sl(n) scanf("%lld", &n)
#define sl2(a,b) scanf("%lld%lld", &a,&b)
#define sl3(a,b,c) scanf("%lld%lld%lld", &a,&b,&c)
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define mkpr  make_pair
#define   ff   first
#define   ss  second
#define  srt(V)  sort(V.begin(),V.end());
#define nl printf("\n");

#define  PI  2*acos(0.0);
#define  INFP 2000000001
#define  INFN (0-(ll)1<<62)
#define  loop(a,b)  for(int g=a;g<=b;g++)
#define  for1(n)  for(int i=0;i<n;i++)
#define  for2(n)  for(int j=0;j<n;j++)
#define  for3(n)  for(int k=0;k<n;k++)
#define  for4(n)  for(int l=0;l<n;l++)
#define  tst(n)  for(int cs=1;cs<=n;cs++)
#define spc <<" "<<
#define limit 1000009
#define  pno  puts("NO");
#define  pys puts("YES");
#define  bug puts("bug");

#define  pmn puts("-1");
typedef pair<int,int>iPair;


vector<iPair>graph[5001];
int par[5001][5001];
int  dis[5001][5001];
bool visited[5001][5001];
priority_queue<pair<int,iPair >,vector<pair<int,iPair >>,greater<pair<int,iPair> > >pq;
ll t;
void diakstra()
{
    for(ll i=0; i<=5000; i++)
    {
        for(ll j=0; j<=5000; j++)
            dis[i][j]=INFP,visited[i][j]=false;
    }
    pq.push(mkpr(0,mkpr(1,0)));

    dis[1][0]=0;

    while(!pq.empty())
    {
        iPair u=pq.top().ss;

        ll x=u.ff;
        ll y=u.ss;
        pq.pop();

        if(visited[x][y])
            continue;
        visited[x][y]=true;

        for(ll i=0; i<graph[x].size(); i++)
        {
            ll  v=graph[x][i].ff;
            ll  cost=graph[x][i].ss;
//cout<<<<endl;

            if(dis[v][y+1]>dis[x][y]+cost&&dis[x][y]+cost<=t)
            {
                dis[v][y+1]=dis[x][y]+cost;
                par[v][y+1]=x;

                pq.push(mkpr(dis[v][y+1],mkpr(v,y+1)));
            }
        }
    }
}

int main()
{
    ll n,m;
    while(cin>>n>>m>>t)
    {
        for(ll i=0; i<m; i++)
        {
            ll a,b,c;
            sl3(a,b,c);
            graph[a].pb(mkpr(b,c));
        }
        diakstra();
        stack<ll>st;

//bug

        for(ll i=n; i>=1; i--)
        {
            //cout<<dis[n][i]<<" ";

            if(dis[n][i]<=t)
            {
//cout<<i+1<<endl;
                ll x=i,y=n;
                while(1)
                {
                    st.push(y);

                    if(y==1)
                    {
                        break;
                    }
                    y=par[y][x];
                    x--;
                }
                cout<<st.size()<<endl;
                while(!st.empty())
                {
                    cout<<st.top()<<" ";
                    st.pop();
                }
                nl
                return 0;
//break;
            }
        }
        nl
    }
}
