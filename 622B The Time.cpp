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

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;

      scanf("%lld:%lld ",&x,&y);
      scl(z);


      m=x*60+y+z;

      ll h1=m/60;
      ll m1=m%60;
      h1%=24;

    printf("%02lld:%02lld\n", h1,m1);



return 0;
}




