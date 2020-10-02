
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 200006

int main()
{
    ll m,n,b,d,i,j,k,x,y,z,l,r, p, q;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n;

    string s[n] , rev_s[n];

    ll c[n];
    fr(i,n)cin>>c[i];


    fr(i, n)
    {
        cin>>s[i];
        rev_s[i]=s[i];
        reverse(all(rev_s[i] ));
    }

    vector<pr>dp(n, {inf, inf  } );
    dp[0]={0 , c[0]};

    pr res;
    fr1(i, n-1)
    {
        res={inf, inf};

        if(s[ i ] >= s[i-1]  ) res.ff=dp[i-1].ff;
        if(s[i] >= rev_s[i-1] ) res.ff=min(res.ff , dp[i-1].ss   );

        if(rev_s[i] >= s[i-1] )  res.ss=dp[i-1].ff + c[i];
        if(rev_s[i] >= rev_s[i-1] ) res.ss=min(res.ss , dp[i-1].ss+c[i] );

        dp[i]=res;
    }

    ans=min(dp[n-1].ff , dp[n-1].ss );

    if(ans==inf )cout<<-1<<endl;
    else pfl(ans);



return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



