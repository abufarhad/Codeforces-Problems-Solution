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
#define seg_tree(n) 	ll left=n*2,right=l+1,mid=(l+r)/2
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 200006

ll dp[N][3];
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;
        scll(l , r);
        ll x0, x1, x2;
        l--;
        x0=r/3-l/3 , x1=(r+1)/3-(l+1)/3  , x2=(r+2)/3-(l+2)/3 ;

        dp[0][0]=x0 , dp[0][1]=x1, dp[0][2]=x2;
        fr1(i , n-1)
        {
            dp[i][0]=dp[i-1][0]*x0 + dp[i-1][1]*x2 + dp[i-1][2]*x1 ; dp[i][0]%=md;
            dp[i][1]=dp[i-1][0]*x1  + dp[i-1][1]*x0 + dp[i-1][2]*x2 ; dp[i][1]%=md;
            dp[i][2]=dp[i-1][0]*x2 + dp[i-1][1]*x1 + dp[i-1][2]*x0 ; dp[i][2]%=md;
        }
        ans=dp[n-1][0];
        cout<<ans;pn;
    }

return 0;
}

