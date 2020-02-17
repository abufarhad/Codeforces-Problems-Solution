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
    ll m,n,t,b,c,d,i,j,k,p,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      while(cin>>n>>m)
      {
           ll mn=0, mx=0;
           //for min
            ll team=n/m;
            ll baki=n%m;
            if(baki>0)
            {
            team++;
            mn+=baki* (team* (team-1))/2;
            team--;
            mn+= (m-baki)*(team* (team-1))/2;
            }
            else mn+=m*(team* (team-1))/2;

             //for max
             team=n-m+1;
             mx=(team* (team-1))/2;

             cout<<mn<<" "<<mx<<endl;

      }

return 0;
}





