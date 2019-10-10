#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
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
#define N 300006
vector< pair<ll,ll> > w[N];
ll dp[N], tmp[N];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    scl(n), scl(m);
    fr(i,m)
    {
       scl(x), scl(y), scl(z);
        w[z].pb({x,y} );
    }

    fr(i,N)
    {
        ll sz=w[i].size();

        fr(j, sz)
        {
            ll v=w[i][j].second;
            tmp[v]=0;
        }

        fr(j,sz)
        {
            ll u=w[i][j].first;
            ll v=w[i][j].second;
            tmp[v]=max(tmp[v], dp[u]+1);

            //cout<<u<<" "<<v<<" "<<tmp[v]<<" "<<dp[u]<<endl;
        }

        fr(j,sz)
        {
            ll u=w[i][j].first;
            ll v=w[i][j].second;
            dp[v]=max(tmp[v], dp[v]);

           // cout<<u<<" - "<<v<<" "<<tmp[v]<<" "<<dp[v]<<endl;
        }
    }
    ll ans=-1;
    fr1(i,n)ans=max(ans, dp[i]);
    pfl(ans);

    return 0;
}




