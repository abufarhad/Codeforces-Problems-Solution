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

ll find_pos(ll n)
{
    ll i=1;
    n--;
    while(n>=0)
    {
        n-=i;
        i++;
    }
    return (n+i);
}
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      ans=find_pos(n);
      cout<<(ans);

return 0;
}




