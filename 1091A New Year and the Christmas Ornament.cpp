//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define fr1(i,n)             for (ll i=1;i<=n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,ans=0;
     cin>>y>>b>>r;

   fr1(i,y)
   {
       if(b>=i+1 && r>=i+2) ans=3*i+3;
   }
  cout<<ans<<endl;

return 0;
}




