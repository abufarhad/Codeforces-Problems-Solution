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
#define mem(a,i)            memset(a, i, sizeof(a))
#define N 300006
vector<ll>v[N];

ll cur[N];
ll n , x, y;

void dfs(ll child , ll par)
{
    cur[child]=1;

    for(auto now : v[child])
    {
        if(now !=par )
        {
            dfs(now  , child);
            cur[child]+=cur[now];
        }
    }
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,a, b,c,d,i,j,k,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>x>>y;

        fr(i , n-1)
        {
            scll(a, b);
            v[a].pb(b);
            v[b].pb(a);
        }

        dfs(x, -1);
        p=cur[y];  //behind all path of y

        mem(cur , 0 );

        dfs(y, -1);
        q=cur[x];   //behind all path of x


        ans=n*(n-1)  -  p*q;

        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



