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

ll r[1000005];
int main()
{
    ll m,n,t,b,c,d,i,j,k,y,z,l,q,cntp=0, cntn=0;
    char x;

      ll cnt=0,ans=0;
      scl(n);
      for(i=0;i<n;i++)
      {
         cin>>x>>m;
         if(x=='+') { if(cntn>=1)cntn--;   cntp++, r[m]=1;}
         else { if(r[m]==1)cntp--;   cntn++, r[m]=0;}
      }

      pfl((cntp+cntn));

return 0;
}




