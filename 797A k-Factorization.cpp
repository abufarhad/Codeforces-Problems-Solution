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
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=-1,ans=1;
      cin>>n>>m;
      vector<ll>v;

     for(i=2;i<=n;)
     {
         if(v.size()==m-1){v.pb(n);break;}
         if(n%i==0)
         {
             v.pb(i);
             n/=i;
         }
         else i++;
     }
     //fr(i,v.size())cout<<v[i]<<" ";
     //pn;
    if(v.size()==m)fr(i,v.size())cout<<v[i]<<" ";
    else pfl(cnt);

return 0;
}




