#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 2006
vector<ll>v[N];
bool vis[N];
ll dp[N] , wt[N];
ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

ll dfs(ll s , ll root )
{
    dp[s]= vis[s]=1;

    for(auto  to : v[s] )
    {
       if(vis[to]   or ( wt[to]- wt[root] >d) )continue;
       if(wt[to]  <  wt[root]  )continue;                     //every time root consider as minimum value
       if(wt[to]==wt[root]  and to > root )continue;

       dfs(to , root);

       dp[s]= ( dp[s] * (dp[to] + 1) ) %md;
    }
}

int main()
{
    ll cnt=0,ans=0,sum=0 ;
    cin>>d>>n;

    fr1(i,n)cin>>wt[i];

    fr1(i, n-1)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }

    fr1(i, n)
    {
        mem(vis, 0);
        mem(dp , 0);

        dfs(i , i);
        ans=( ans+ dp[i]  ) %md;
    }

    cout<<ans;pn;

return 0;
}



