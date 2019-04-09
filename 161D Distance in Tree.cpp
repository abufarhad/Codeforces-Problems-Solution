

/// Unsolve yet  ->

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
vector<ll>v[50005];
bool visited[50005 ];

void dfs(ll n)
{
    visited[n]=1;
    for(ll i=0; i<v[n].size(); i++)
    {
        ll u=v[n][i];
        if(visited[u]=0 )
        {
            visited[u]=1;
            dfs(u);
        }
    }
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;


      ll cnt=0,ans=0;
      scl(n);scl(k);

      fr(i,n)
      {
          cin>>a>>b;
          v[a].pb(b);
          v[b].pb(a);
      }

      dfs(1);


return 0;
}




