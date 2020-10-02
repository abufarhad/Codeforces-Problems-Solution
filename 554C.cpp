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

#define N 1005
ll fac[N];

ll fact()
{
    fac[0]=1;
    fr1(i, 1000)
    {
        fac[i]=fac[i-1]*i;
        fac[i]%=md;
    }
}

ll bigmd(ll b, ll p)
{
    ll res=1, rem=b;
    while(p)
    {
        if(p%2==1 )
        {
            res=res*rem%md ;
            p--;
        }
        rem=rem*rem%md;
        p>>=1;
    }
    return res;
}

ll md_inverse ( ll n)
{
    return bigmd( n, md-2 );
}

ll nCr(ll n, ll r)
{
    return ( ( (fac[n] * md_inverse ( fac[n-r] ) )%md ) * md_inverse ( fac[r] )  )  %md ;
}

ll dp[N];
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        fact();
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;

        cin>>n;
        ll a[n];

        fr1(i,n)cin>>a[i];

        dp[1]=1;
        cnt=a[1];

        for(i=2; i<=n; i++)
        {
            cnt+=a[i];
            dp[i]=(dp[i-1] * nCr(cnt-1, a[i]-1  )%md)%md;
        }

        ans=dp[n];
        pfl(ans);
    }

    return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




