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
#define seg_tree(n) 	    ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200005
vector<ll>v[N] ;
ll  parent[N] , cnt , lev[N];
ll n , st[N][22];

void dfs(ll s , ll p , ll depth )
{
    parent[s]=p;
    lev[s]=depth;

    for(auto to : v[s])
    {
        if(to==p)continue;
        dfs(to , s, depth+1);
    }
}

void build_table()
{
    fr1(i , n)st[i][0]=parent[i];

    ll i , j;
    for(j=1; (1<<j)<=n; j++)
    {
        for(i=1; i<=n; i++)
        {
            st[i][j]=st[  st[i][j-1]  ][j-1];
        }
    }
}

ll lca(ll p , ll q)
{
    if(lev[p] <lev[q])swap(p , q);

    ll log= log2(lev[p]);

    for(ll i=log; i>=0; i--)
    {
        if(lev[p] - (1<<i)  >=lev[q] )
            p=st[p][i];
    }

    if(p==q)return p;

    for(ll i=log; i>=0; i--)
    {
        if(st[p][i]  != st[q][i] )
        {
            p=st[p][i];
            q=st[q][i];
        }
    }

    return parent[p];
}

bool cmp(ll a, ll b)
{
    return lev[a]>lev[b];
}


int main()
{
    ll t;
    //cin>>t;
    t=1;
    tcas(cs, t)
    {
        ll m,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cn=0,sum=0 ;
        scll(n, m);
        fr(i , n-1)
        {
            scll(x, y);
            v[x].pb(y);
            v[y].pb(x);
        }

        dfs(1, 0, 0);
        build_table();

        fr(i , m)
        {
            scl(x);
            ll a[x+3];
            fr(j , x)scl(a[j]);

            sort(a, a+x, cmp);

            ll node=a[0];

            cn=0;
            for(j=1;j<x; j++)
            {
                ll Lca=lca(node , a[j]);
                ll dist_x=lev[a[j] ]-lev[Lca];

                if(dist_x>1 ){cn=1;break;}
            }

            if(cn==0)pys;
            else pno;
        }
    }

return 0;
}
