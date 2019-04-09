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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define fr(i,n)             for (ll i=0;i<n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,z,l,q,r;

      ll cnt=0,ans=0;
     string s,s1,x,y;
     cin>>x>>y;
     fr(i,x.size())  if(x[i]<y[i]){cnt=1;}
     if(cnt==0) cout<<y<<endl;
     else cout<<"-1";


return 0;
}




