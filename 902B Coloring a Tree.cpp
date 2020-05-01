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
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


#define N 10006
vector<ll>v[N];
ll clr[N];
ll cnt=0,ans=1,sum=0;

void dfs(ll pr, ll child, ll now)
{
    for(auto i: v[child])
    {
        if(i != pr )
        {
            if(now != clr[i] )ans++;

            dfs(child, i, clr[i] );
        }
    }
}

int main()
{
    fast;
    ll t;

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    scl(n);
    ll a[n];

    for(i=2; i<=n; i++)
    {
        cin>>x;
        v[i].pb(x);
        v[x].pb(i);
    }


    fr1(i, n)cin>>clr[i];
    dfs(-1, 1, clr[1]);

    cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



