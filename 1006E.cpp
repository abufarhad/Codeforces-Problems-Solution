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
#define scll(n, m)              scanf("%lld%lld",&n, &m)
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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second

#define N 200006

vector<ll>v[N];
bool vis[N];

ll cur[N] , sub_sz[N] , cnt, cur_tim_node[N];
void dfs(ll s)
{
    vis[s]=1;
    sub_sz[s]=1;

    //cout<<s<<" ";

    cur[s]=++cnt;
    cur_tim_node[cnt]=s;

    for(auto now : v[s])
    {
        if(!vis[now])dfs(now);
        sub_sz[s]+=sub_sz[now];
    }
}

int main()
{
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cn=0,ans=0,sum=0 ;
        cin>>n>>q;

        for(i=2;i<=n;i++)
        {
            cin>>x;
            v[x].pb(i);
        }

        dfs(1);
        //cout<<endl;

        fr(i, q)
        {
            cin>>x>>k;
            ll curr=cur[x];

            if(sub_sz[x]<k)cout<<-1<<endl;
            else cout<<cur_tim_node[curr+k-1]<<endl;
        }
return 0;
}


