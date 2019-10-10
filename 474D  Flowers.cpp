//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  1000000007

#define N 100006

int main()
{

    ll m,n=100005,t,a,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(t);scl(k);
    ll dp[n];
    fr(i,n+1)dp[i]=1;

    for(i=k;i<=n;i++)
    {
        dp[i ]= dp[i-1]+dp[i-k];
        dp[i]%=md;
    }
    fr1(i,n-1)dp[i]+=dp[i-1] ,  dp[i]%=md;

     while(t--)
     {
         cin>>a>>b;
         ans=dp[b]%md - dp[a-1]%md;
         ans+=md;
         ans%=md;
         pfl(ans);
     }

return 0;
}





