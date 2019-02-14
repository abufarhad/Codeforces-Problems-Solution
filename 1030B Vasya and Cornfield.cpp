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

      ll cnt=0,ans=0;
     cin>>n>>d>>q;
     while(q--)
     {
         cin>>x>>y;
         if(x+y>=d && x+y<=(2*n -d)  && ( x-y>=-d  && x-y<=d ))cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }

return 0;
}




