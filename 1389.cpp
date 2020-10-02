
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

#define N 100006
ll dp[N][6];

ll n;

ll solve( ll a[]  , ll i , ll k , ll z)
{
    if(i<0 or  i>=n  or k==0)return 0;

    if(dp[i ][z] !=-1 )return dp[i ][z];

    ll res=0;
    if(i<n )res=max(res ,  a[i]+ solve(a, i+1 , k-1 , z  )  );

    if(i>=0 and  z>0)res=max(res ,  a[i]+ solve(a, i-1 , k-1 , z-1 )  );

    return dp[i ][z]=res;
}



int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll(n , k) , scl(z);

        ll a[n];

        fr(i,n)cin>>a[i];

        memset(dp , -1  , sizeof dp);
        ans=a[0] + solve( a, 1 , k , z  );

        cout<<ans;pn;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



