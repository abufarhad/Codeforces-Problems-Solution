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
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 205
ll dp[N][N][N];
ll R[N]  , G[N] , B[N]  , ans=0;
ll m,n,b,i,j,l,r,  g;

ll solve( ll red, ll grn, ll blu )
{
    if(dp[red][grn][blu] ==-1)
    {
        ll x, y, z;
        x=R[red] * G[grn]  , y=R[red] * B[blu] , z=B[blu] * G[grn];

        if(r!= red  and g!=grn) x+=solve(red+1 , grn+1  , blu  );
        if(r!= red  and b!=blu) y+=solve(red+1 , grn  , blu+1  );
        if(b!= blu  and g!=grn) z+=solve(red , grn+1  , blu+1  );


        //cout<<x<<" "<<y<<" "<<z<<endl;
        dp[red][grn][blu]=max(  x, max(y, z));
    }
    return dp[red][grn][blu];
}

int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,sum=0 ;
        cin>>r>>g>>b;


        fr(i, r)cin>>R[i];
        fr(i, g)cin>>G[i];
        fr(i, b)cin>>B[i];

        sort(R , R+r  , greater<ll>() );
        sort(G , G+g , greater<ll>() );
        sort(B , B+b , greater<ll>() );


        mem(dp , -1);
        ans=solve(0 , 0 , 0);
        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
