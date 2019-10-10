#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)




ll dp[111][111];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(m);
      fr1(i,n)
      {
          cin>>x;
          x%=m;
          fr1(j,m)
          {
              dp[i][(j+x)%m]=dp[j-1][(j+x)%m] | dp[i-1][j];
          }
          dp[i][x]=1;
      }
      printf( dp[min(m,n)][0] ? "YES":"NO" );

return 0;
}


