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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
//ll  pow_calc(ll x, ll e){ ll res;  if (e == 0) res = 1; else if (e == 1) res = x;  else { res = bigpow(x, e / 2);  res = res * res;  if (e % 2) res = res * x; } return res; }
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,mx=-2000000005,mn=2000000005;

      ll cnt=0,ans=0;
      scl(n);scl(k);
      ll  a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          mx=max(a[i], mx);
          mn=min(a[i], mn);
      }
      if( k==1)cout<<mn<<endl;
      else if(k==2) cout<<max(a[0],a[n-1])<<endl;
      else pfl(mx);

return 0;
}




