
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
#define md                  100000000
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define N 101

ll dp[N][N][15][15]   ;
ll n1 , n2 , k1, k2;


ll solve(ll  f_man , ll h_man , ll kf , ll kh)
{
    if(f_man+h_man ==0 )return 1;

    if(dp[f_man][h_man][kf][kh] !=-1  ) return dp[f_man][h_man][kf][kh];


    ll ans=0;
    if( kf>0 and f_man>0   ) ans+=solve(f_man-1 , h_man , kf-1 , k2 )  , ans%=md;
    if( kh>0 and  h_man>0  ) ans+=solve(f_man , h_man-1 , k1 , kh-1 ) , ans%=md;


    return dp[f_man][h_man][kf][kh]= ans;
}


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        scll( n1, n2);
        scll(k1 , k2);


        mem(dp , -1);
        ans=solve(n1 , n2 , k1 , k2);
        pfl(ans);
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



