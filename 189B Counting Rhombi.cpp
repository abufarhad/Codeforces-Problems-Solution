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


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,e,f;

      ll cnt=0,ans=0;
     while(cin>>x>>y)
     {
         c=x/2, d=y/2;
         e=x%2, f=y%2;
         if(c>0 && d>0)pfl(c*d *(c+e)*(d+f) );
         else pfl(ans);
     }
return 0;
}




