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
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
#define f   first
#define sc   second

string s[55];
vector<pair<ll,ll>>reach;
ll mat[55][55];

void dfs(ll x1, ll y1, ll n)
{
    if(x1>=n or y1>=n)return ;
    if(x1<0 or y1<0)return ;

    if(mat[x1][y1]==1)return ;

    mat[x1][y1]=1;
    reach.pb(make_pair(x1,y1));
    dfs(x1+1, y1,n );
    dfs(x1-1, y1, n);
    dfs(x1, y1+1, n);
    dfs(x1, y1-1, n);
}

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll x1, x2, y1, y2;
      scl(n);
      cin>>x1>>y1>>x2>>y2;
      x1--, y1--, x2--, y2--;

     fr(i,n)cin>>s[i];
     fr(i,n) fr(j,n)mat[i][j]=s[i][j]-'0';
      reach.clear();

     dfs(x1, y1, n);
     vector<pair<ll,ll>> src=reach;

     reach.clear();

     dfs(x2, y2, n);
     vector<pair<ll,ll>> dest=reach;

    ll cost=0, ans=1e18;
    fr(i, src.size())
    {
        fr(j, dest.size())
        {
            cost=(src[i].f - dest[j].f )*(src[i].f - dest[j].f );
            cost+=(src[i].sc - dest[j].sc )*(src[i].sc - dest[j].sc );

            ans=min(ans, cost);
        }
    }

    if(src.size()==0 or dest.size()==0)ans=0;

    pfl(ans);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

