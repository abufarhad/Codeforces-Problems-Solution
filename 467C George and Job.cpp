
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
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  10000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 5005

ll cmsm[N], a[N];
ll m,n,k;
ll dp[N][N];

ll solve(ll i, ll p)
{
    if(i>n-m+1 || p==k)return 0;

    if(dp[i][p] !=-1)return dp[i][p];

    ll tmp=cmsm[i+m-1 ]-cmsm[i-1];

    ll x,y;
    x=y=0;

    x=tmp+solve(i+m, p+1);
    y=solve(i+1, p);

    return dp[i][p]=max( x, y);

}

int main()
{
    fast;
    while(cin>>n>>m>>k)
    {
    ll cnt=0,ans=0,sum=0;
    fr1(i,n)cin>>a[i];

    fr1(i, n)cmsm[i]+=cmsm[i-1]+a[i];

    mem(dp, -1);

    ans=solve(1, 0);
    cout<<ans<<endl;
    mem(cmsm, 0);

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

