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

int main()
{
    ll m,n,t,b,c,d,i=1,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      cin>>n>>m;
      ll baki=240-m;
     while( 1 )
      {
          ans+=5*i;
          i++;
          //cout<<ans<<endl;
          if(ans<=baki && n>cnt)cnt++;
          else break;
      }
      pfl(cnt);

return 0;
}




