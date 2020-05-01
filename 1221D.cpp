
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


#define N 300006
ll dp[N][5];
ll n, a[N],b[N];


ll solve(ll pos, ll in)
{
    if(pos> n)return 0;
    if(dp[pos][in] !=-1)return dp[pos][in];

    ll res=1e18;
    if(a[pos-1] + in  != a[pos] )  res=min( res,  solve(pos+1, 0 ) );
    if(a[pos-1] + in  != a[pos]+1 )  res=min( res,  b[pos]+solve(pos+1, 1 ) );
    if(a[pos-1] + in  != a[pos] +2 ) res=min( res,  2*b[pos]+solve(pos+1, 2 ) );

    return dp[pos][in]=res;
}



int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0,sum=0;
    scl(n);

    fr1(i,n)cin>>a[i]>>b[i] ;
    fr(i, n+1)fr(j, 3)dp[i][j]=-1;

    ans=solve(1, 0);
    cout<<ans<<endl;
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




