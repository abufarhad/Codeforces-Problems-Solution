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
#define l(s)                      s.size()


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      string s,s1,s3,s4,s2;
      cin>>s>>s1;

      n=l(s);
          s2=s;
          fr(i,n)
          {
             if(s1[i] !=s[i] ){
             if(cnt%2==0)s2[i]=s[i]; else s2[i]=s1[i];
             cnt++;
              }
          }
          if(cnt&1)cout<<"impossible"<<endl;
          else cout<<s2<<endl;

return 0;
}





