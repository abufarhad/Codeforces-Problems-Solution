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

ll cnt[ 1000];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll ans=0;
      string s;
      vector<string>v;
      scl(n);
      fr(i,n)
      {
          cin>>s;
         // v.pb(s);
          cnt[s[0] ]++;
      }
      i=0, ans=0;
      for(char ch='a' ;ch<='z' ;ch++)
      {
         if(cnt[ch]==3) ans++;
         else if(cnt[ch]>3)
         {
             d=cnt[ch]/2;
             x=cnt[ch]%2;

             y=d+x;
             ans+=(( d*(d-1) )/2) + (( y*(y-1) )/2)  ;
         }
        //cout<<ch<<" "<<cnt[ch]<<endl;
      }

    pfl(ans);
return 0;
}




