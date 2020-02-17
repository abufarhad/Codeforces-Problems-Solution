
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define mod                  1000000007

ll dp[200005][3];
int main()
{

    ll n, l, r, i;

    cin>>n>>l>>r;
    ll cnt[5];
    ll ans=0;

    ll n0=r/3- (l-1)/ 3 ;
    ll n1=(r+1)/3- l/ 3 ;
    ll n2=(r+2)/3- (l+1)/ 3 ;

   cout<<n0<<" "<<n1<<" "<<n2<<endl;

    cnt[0]=n0,cnt[0]=n1,cnt[0]=n2;

    dp[0][0]=1;

	fr1(i, n)
	{
		dp[i][0]=(dp[i-1][0]*n0+dp[i-1][1]*n2+dp[i-1][2]*n1)%mod;
		dp[i][1]=(dp[i-1][0]*n1+dp[i-1][1]*n0+dp[i-1][2]*n2)%mod;
		dp[i][2]=(dp[i-1][0]*n2+dp[i-1][1]*n1+dp[i-1][2]*n0)%mod;
	}




//    fr1(i, n)
//    {
//        fr(j, 3)
//        {
//            fr(k, 3)
//            {
//                dp[i][(k+j)%3]+=(dp[i-1][j] *cnt[k])%mod;
//                dp[i][(k+j)%3]%=mod;
//            }
//        }
//    }
    ans=dp[n][0];

    cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

