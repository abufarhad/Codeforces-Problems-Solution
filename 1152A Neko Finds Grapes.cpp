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
    ll m,n,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0, ev1=0,ev2=0,od1=0,od2=0;
      cin>>n>>m;
      ll  a[n],b[m];
      for(i=0;i<n;i++) { cin>>a[i]; if(a[i]%2==0 ) ev1++; else od1++;}
      for(i=0;i<m;i++) { cin>>b[i]; if(b[i]%2==0 )ev2++; else od2++;}

      pfl( min(ev1, od2 ) + min( ev2, od1) );

return 0;
}




