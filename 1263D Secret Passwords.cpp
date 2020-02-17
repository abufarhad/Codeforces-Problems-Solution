//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define  N   200105
vector<ll> nd[N];
bool vis[N];

ll dfs(ll n)
{
    //cout<<n<<" ";
    vis[n]=1;
    for(auto it: nd[n]) if(!vis[it])dfs(it);
}

void  addedge(ll x,ll y)
{
   nd[x].pb(y);
   nd[y].pb(x);
}

int main()
{
    ll t;
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s1, s2, s3, s4;
    ll cnt=0;
    scl(n);

    fr(i,n)
    {
        cin>>s1;
        for (char c : s1) addedge(i, n + c - 'a');
    }

    for(i=n; i<n+26;i++)
    {
        if(!nd[i].empty()  and !vis[i])dfs(i), cnt++;
    }
    cout<<cnt<<endl;
return 0;
}


