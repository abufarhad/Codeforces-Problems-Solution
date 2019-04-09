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

      ll cnt=0,ans=0;
      ll  a[5];
      for(i=0;i<4;i++)
      {
          cin>>a[i];
      }

        if( (( a[0]!=0 &&a[3]!=0) &&  a[0]==a[3] ) || (a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0)) ans=1;

        if( ( a[0]==0 &&a[3]==0&& a[2]==0 ) &&  (  a[1] >=2 ) ) ans=1;

        if( ( a[0]==0 &&a[3]==0 && a[1]==0) &&  (  a[2] >=1 ) ) ans=0;

        pfl(ans);


return 0;
}




