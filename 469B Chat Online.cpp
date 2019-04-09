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
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}
ll a[1005],b[1005],c[1005],d[1005];

int main()
{
    ll m,n,t,p,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      cin>>p>>q>>l>>r;
      fr1(i,p) cin>>a[i]>>b[i];
      fr1(i,q) cin>>c[i]>>d[i];

      for(k=l; k<=r;k++)
      {
          for(i=1,j=1; i<=p&&j<=q ;)
          {
              if(b[i]<c[j]+k )i++;
              else{
              if(a[i]>d[j]+k )j++;
              else
              {
                  cnt++; break;
              }
          }}
      }
      pfl(cnt);

return 0;
}




