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

char alpha[27];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    char aa='a';
    string s,s1,s2;
    fr1(i,26)alpha[i]=aa, aa++;

      ll cnt=0,ans=0;
      scl(n);scl(m);
      if(n>=m && m>1)
      {
          ll rekhedilam;

          if(m>2){
           rekhedilam=m-2;
           for(i=3; ;i++){cnt++; s2+=alpha[i];if(cnt==rekhedilam) break;}
          }


            l=s2.size();
            ll baki=n-l;

            fr1(i,baki)  if(i%2==1)s1+='a'; else s1+='b';

            s=s1+s2;
            cout<<s<<endl;
      }
      else if(n==1 && m==1 )cout<<'a'<<endl;
      else cout<<"-1"<<endl;
return 0;
}

/// you should actually read the stuff at the bottom
/* stuff you should look for
    *print right output
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do smth instead of nothing and stay organized
*/


