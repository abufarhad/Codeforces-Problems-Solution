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

ll a[5];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(t);
     while(t--)
     {
      scl(n);
      memset(a, 0, sizeof(a));
      fr(i,n)cin>>x, a[x%3]++;
      ans= a[0]+ min(a[1], a[2])+ (abs(a[1]-a[2])/ 3);
      pfl(ans);
     }
return 0;
}





