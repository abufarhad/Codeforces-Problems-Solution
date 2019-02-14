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


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll sum=0,mx=-1000000;
      cin>>n>>k;
      ll a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
      }
      fr(i,k)
      {
          ll ans=sum;
          for(j=i;j<n;j+=k)
          {
              ans-=a[j];
          }
          mx=max(mx,abs(ans));
      }
      cout<<mx<<endl;

return 0;
}




