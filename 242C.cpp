#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<"\n"
#define pys                 cout<<"YES"<<"\n"

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<"\n"
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

/*.....Kings path....*/
ll dx[]={-1,-1,-1,0,1,1,1,0};
ll dy[]={-1,0,1,1,1,0,-1,-1};


#define N 100006

int main()
{
    fast;
    ll t;

    ll m,n,a, b,c,d,i,j,k,x,y,z,l,r;

    ll cnt=0,ans=0,sum=0;
    cin>>a>>b>>x>>y;
    cin>>n;

    map<pr, ll> mp;


    fr(i, n)
    {
        cin>>r>>l>>k;
        for(j=l; j<=k; j++)mp[{r, j} ]=-1;
    }

    mp[{a, b}]=0;

    queue<pr>q;

    q.push({a, b});
    while( ! q.empty())
    {
        pr u=q.front();
        q.pop();

        fr(i, 8)
        {
            pr v=pr( u.ff+dx[i]  , u.ss+dy[i]);
            if(mp[v]==-1)mp[v]=mp[u]+1 ,   q.push(v);
        }
    }

    cout<<mp[{x, y}]<<endl;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



