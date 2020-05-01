
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


#define N 2005
ll m,n,b,c,d,i,j,k,z,l,q,r,h;
ll a[N];
ll dp[N][N];

ll calc(ll st, ll prev)
{
    if(st>n)return 0;
    if(dp[ st][prev] !=-1)return dp[ st][prev] ;

    ll p,q, ans1, ans2;
    p=q=0;

    ll x=(a[st]+prev)%h;
    ans1=calc(st+1, x);
    if(x>=l and x<=r )ans1++;

    ll y=(a[st]-1+prev)%h;
    ans2=calc(st+1, y);
    if(y>=l and y<=r )ans2++;

    return dp[st][prev]=max(ans1, ans2);
}

int main()
{
    fast;
    scl(n);
    cin>>h>>l>>r;

    fr1(i,n)cin>>a[i];
    mem(dp, -1);

    ll ans=calc(1, 0);
    cout<<ans<<endl;
return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




