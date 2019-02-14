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
#define md                  1000000007

int main()
{
    ll m,n,i,j;

     ll cnt=0,ans=0;
     string s;
     cin>>s;
     for(i=s.size()-1; i>=0;i--)
     {
         if(s[i]=='b')cnt++;
         else
         {
             ans+=cnt, cnt*=2, ans%=md, cnt%=md;
         }
     }
     pfl(ans);

return 0;
}




