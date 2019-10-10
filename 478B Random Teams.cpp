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


int main()
{

    ll m,n,t,b,c,d,i,j,k,p,x,y,z,l,q,r,team;

      ll cnt=0,ans=0;
      while(cin>>n>>m){ b=1;


      if(m>1 && n>m){
      b=2;
      y=m*b;

      while(y< n ){y=m*b ; if(y==n) break; b++ ;}
      if( y-n >=b )b--;
     // cout<<b<<endl;

      }
     if(b==1 && m!=1) { k=m*2, team=(n-(k-n))/2 ; b++; }
     else team=n/b;


      x=n-(m-1);
      ll ansMax= ( x*(x-1) )/2;
      ll ansMin=0;

      fr(i, team)  ansMin+=( ( b*(b-1) )/2 ) ;

      if(ansMin==0)ansMin=ansMax;


     cout<<ansMin<<" "<<ansMax<<endl;
      }

return 0;
}





