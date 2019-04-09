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
    ll m,n,t,b,c,d,j,k,x,y,l,q,r;

      ll cnt=0,ans=0,i=1,z=1;
      scl(n);
      scl(m);
      if(m>=n)pfl(n);
      else
      {
          x=m;
          while(z<(n-x) )
          {
              i++;
              z+=i;
          }
          pfl(i+x);
      }

return 0;
}




