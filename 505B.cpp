//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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

#define N 106

vector<pr>v[N];
ll vis[N] , cnt=0;

ll dfs(ll src , ll dest, ll col)
{
    vis[src]=1;
    if(src==dest ) cnt=1 ;

    for(auto now : v[src])
    {
        ll v=now.ff , c=now.ss;
        if(!vis[v]  )
        {
            if(cnt){ break;}
            if(c==col) dfs( v, dest , col );
        }
    }

    if(cnt)return 1;
    else return 0;
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cn=0,ans=0,sum=0 ;
        scll(n, m);

        set<ll>st;
        fr(i, m)
        {
            scll(x, y), scl(z);

            v[x].pb({y , z});
            v[y].pb({x , z});
            st.insert(z);
        }

        scl(q);
        fr(i, q)
        {
            ans=0 , cnt=0;
            scll(x, y);
            for(auto now : st)
            {
                cnt=0, mem(vis, 0);
                ans+=dfs(x, y, now );
            }

            pfl(ans);
        }
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
