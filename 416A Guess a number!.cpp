//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

     string sign ,s,ans;
     ll mx=20000000000, mn=-mx;
     cin>>n;

      while(n--){
          cin>>s>>x>>ans;
          if(ans=="N")
          {
              if(s=="<")s=">=";
              else if(s==">")s="<=";
              else if(s=="<=")s=">";
              else if(s==">=")s="<";
          }

          if(s==">")mn=max(mn,x+1);
          else if(s=="<")mx=min(mx,x-1);
          else if(s==">=")mn=max(mn,x);
          else if(s=="<=")mx=min(mx,x);

      }

      if(mn<=mx)cout<<mn<<endl;
      else cout<<"Impossible"<<endl;


return 0;
}




