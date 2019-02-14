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


int main()
{
    ll m,n,t,tmp=0,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=10000000;
      scl(n);
      ll  a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }


     for(i=1;i<=100;i++)
      {
          tmp=0;
          for(j=0;j<n;j++)
          {
              d=abs(a[j]-i );
              if(d>=1)tmp+=d-1;
          }
         // cout<<x<<" "<<ans<<endl;
          if(tmp<ans){ans=tmp,x=i;}
      }
      cout<<x<<" "<<ans<<endl;

return 0;
}




