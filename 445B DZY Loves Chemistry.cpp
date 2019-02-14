//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

vector<ll>v[100];
bool visited[100];

ll dfs(ll n )
{
    visited[n]=1;
    for(ll i=0;i<v[n].size();i++)
    {
        ll k= v[n][i] ;
        //cout<<k<<" ";
        if(visited[k]==0) dfs(k);
    }
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,cnt=0;

      cin>>n>>m;
      fr(i,m)
      {
          cin>>x>>y;
          v[x].pb(y);
          v[y].pb(x);
      }

      for(i=1;i<=n;i++)
      {
          if(visited[i]==0)
          {
              cnt++;dfs(i);
          }
      }
      ll ok=n-cnt;
      cout<<(ll)pow(2,ok)<<endl;



return 0;
}




