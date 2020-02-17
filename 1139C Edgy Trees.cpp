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
#define md                  1000000007

 vector<ll>v[100005];
 bool vis[100005];
 ll cnt=0;

ll bigmd(ll x, ll y)
{
    ll res=1;
    if(y==0)return 1;
    if(y%2) return (x*(bigmd(x, y/2) ) )%md;
    else
    {
        ll tmp=bigmd(x, y/2);
        return tmp*tmp%md;
    }
}
ll dfs(ll s, ll d)
{
    vis[s]=1;
    cnt++;
    for(auto x:v[s])
    {
        if(x-d and !vis[x])dfs(x, d);
    }
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);scl(k);

    fr1(i,n-1)
    {
        cin>>x>>y>>z;
        if(!z)
        {
            v[x].pb(y);
            v[y].pb(x);
        }
    }
    ans=bigmd(n, k);

    for(i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            cnt=0;
            dfs(i,i);
            ll temp=bigmd(cnt,k);
            ans=(ans-temp+md)%md;
        }
    }

    pfl(ans);
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


