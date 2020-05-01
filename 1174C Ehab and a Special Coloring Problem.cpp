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
#define endl 	            "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)


#define M 100006
ll a[M];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
      ll cnt=1,ans=0;
      scl(n);

      for(i=2; i<=n;i++ )
      {
         if(a[i]==0)
         {
             for(j=i;j<=n;j+=i)cout<<j<<" ",  a[j]=cnt;
             cnt++;
         }
         cout<<endl;
      }
      for(i=2;i<=n;i++)cout<<a[i]<<" ";


return 0;
}





