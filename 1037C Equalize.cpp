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

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s,s1;
      cin>>n>>s>>s1;

      fr(i, n)
      {
          if( s[i] !=s1[i])cnt++;
      }
      //pfl(cnt);

     for(i=0;i<n-1; )
      {
          if( ( s[i]=='0' && s1[i]=='1' && s[i+1]=='1' && s1[i+1]=='0') || ( s[i]=='1' && s1[i]=='0' && s[i+1]=='0' && s1[i+1]=='1') )
            cnt-=2, ans++ ,i+=2 ;
          else i++;
      }
      pfl(cnt+ans);

return 0;
}




