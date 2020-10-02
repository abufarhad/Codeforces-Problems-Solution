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

#define N 605

ll dist[N][N]  , c[N];
bool vis[N];

int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,d,i,j,k,x=0,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0, mx=0 ;
        scl(n);

        fr1(i , n) fr1(j , n)scl(dist[i][j]);

        for(i=n; i>0; i--)scl( c[i] );

        vector<ll>v;

        fr1(k , n)
        {
            x=c[k];
            sum=0;
            vis[x]=true;

            fr1(i , n)
            {
                fr1(j , n)
                {
                    dist[i][j]=min(dist[i][j]  , dist[i][x]+dist[x][j] );
                    if(vis[i]  and vis[j] )sum+=dist[i][j];
                }
            }

            v.pb(sum);
        }


        for(i=v.size()-1 ; i>=0; i--)cout<<v[i]<<" ";pn;
    }

return 0;
}

/*
4 1 2 3
this can be done by reversely
3
2 3
1 2 3
4 1 2 3
*/

