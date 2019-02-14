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
    ll i,w,h,s_w,s_h,s2_w,s2_h,ans,stp=0;

    cin>>w>>h;
    cin>>s_w>>s_h;
    cin>>s2_w>>s2_h;
    ans=(w);

    for(i=h; i>=0;i--){
    ans+=i;
    if(i==s_h ){ ans-=s_w; if(ans<0 )ans=0;  }
    if(i==s2_h){ ans-=s2_w;   if(ans<0) ans=0;} }

   cout<<ans<<endl;

return 0;
}




