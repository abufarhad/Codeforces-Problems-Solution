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
#define scc(c)	            scanf(" %c", &c);
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
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)


#define N 100006
vector<ll>v[N];
bool  vis[N];
ll cnt=1;

ll dfs(ll n)
{
    vis[n]=1;
    for(auto it: v[n])if(!vis[it])cnt++,dfs(it);
    return cnt;
}
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

   cin>>n>>m;
   fr(i,m)
   {
       cin>>x>>y;
       v[x].pb(y), v[y].pb(x);
   }
   dfs(1);
   if(n==m and n==cnt)cout<<"FHTAGN!"<<endl;
   else cout<<"NO"<<endl;


return 0;
}



