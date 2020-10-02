//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                    long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006
#define pir       pair<ll,ll>

vector< pir > graph[N];
priority_queue< pir, vector<pir> , greater< pir > > pq;

ll dist[N], nxt[N], pr[N], node;


void dijkstra(ll n)
{
    fr(i,N)dist[i]=LLONG_MAX;

    fr(i,N)pr[i]=-1;

    dist[n]=0;
    pq.push(make_pair( 0, n));
    while(!pq.empty())
    {
        ll u=pq.top().second;
        pq.pop();
        fr(i, graph[u].size())
        {
            ll v=graph[u][i].first;
            ll cost=graph[u][i].second;

            cout<<v<<" "<<cost<<endl;
            if( dist[v] > dist[u]+cost )
            {
                 pr[v]=u;
                 //cout<<pr[v]<<" ";
                 dist[v]=dist[u]+cost;
                 pq.push(make_pair(dist[v], v ));
            }
        }
    }


///Shortest path printing
    vector<ll>v;

    ll des_node=node;
    while(pr[ des_node] !=-1 )
    {
         v.pb(des_node);
         des_node=pr[des_node];
    }
    v.pb(1);
    reverse(v.begin(), v.end());

    if(v.size()>1) fr(i,v.size())cout<<v[i]<<" ";
    else cout<<"-1"<<endl;

    //pn;
}


int main()
{

    ll m,t,a,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(node);scl(m);


      for(i=0;i<m;i++)
      {
          cin>>a>>b>>c;
          graph[a].pb(make_pair(b,c) );
          graph[b].pb(make_pair(a,c) );
      }



      dijkstra(1);

return 0;
}




