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
      cin>>n>>k;
      ll a[n+1];
      for(i=0;i<n;i++) {cin>>a[i];}
      string s,s1;
      cin>>s;

      for(i=0,j=0;i<n; )
      {
          while(s[i]==s[j] )j++;
          sort(a+i, a+j);
          for(m=max(i, j-k); m<j;m++) ans+=a[m];

          i=j;
      }
      cout<<ans<<endl;
return 0;
}




