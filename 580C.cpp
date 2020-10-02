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

#define N 100006
ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
ll cat[N] , ans;
vector<ll>v[N];
bool vis[N];

void dfs(ll s , ll cnt )
{
    vis[s]=1;
    if(cat[s] ) cnt++;
    else cnt=0;

    if( cnt > k)return;
    if( v[s].size()==1  and s!=1 )ans++;

    for(auto i: v[s])
    {
        if(!vis[i]) dfs(i , cnt);
    }
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        cin>>n>>k;
        fr1(i,n)cin>>cat[i];

        fr(i, n-1)
        {
            scll(x, y);
            v[x].pb(y );
            v[y].pb(x);
        }

        dfs(1 , 0);
        cout<<ans;pn;
    }
return 0;
}
