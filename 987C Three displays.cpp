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
#define md                  1000000007
#define inf                 1e18
#define debug               cout<<"I am here"<<endl;
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 3005

ll dp[N][N][4];
ll s[N], c[N];
ll m,n,b;

ll solve(ll pos,ll  lst ,ll cnt)
{
    if(cnt==3)return 0;

    if(pos==n)
    {
        if(cnt!=3)return inf;
        else return 0;
    }

    ll &ret=dp[pos][lst][cnt];

    if(ret !=-1)return ret;

    ll l,r;
    l=r=inf;

   // cout<<"pos "<<pos<<" "<<"lst "<<lst<<endl;

    if(s[pos] >s[lst])  l=c[pos]+solve(pos+1, pos, cnt+1);
    r=solve(pos+1, lst, cnt);

    return dp[pos][lst][cnt]=min(l, r);

}

int main()
{
    fast;
    while(cin>>n)
    {
    mem(dp, -1);

    ll i,j,cnt=0,ans=inf,sum=0;
    //ll s[n], c[n];


    fr1(i,n)cin>>s[i];
    fr1(i, n)cin>>c[i];

   // ans=solve(1, 0, 0);


    /*
    for(i=2; i<n;i++)
    {
        ll l=inf;
        for(j=1;j<i;j++)   if(s[i] >s[j]) l=min(l,  c[j]);

        ll r=inf;
        for(j=i+1; j<=n; j++)   if(s[j]>s[i]) r=min(r, c[j]);

        ans=min(ans, l+c[i]+r);
    }

    if(ans>=inf)cout<<-1<<endl;
    else cout<<ans<<endl;
 */

    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




