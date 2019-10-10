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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      cin>>n>>m>>k;

      ll dol[]={1 , 2, 5, 10, 20, 50, 100};
      ll eu[]= {5, 10, 20, 50, 100, 200};
      ll cnt=0, cn=0;


      x=6, y=5;
      vector<ll>v,v1;
      for(i=0;i<=x;i++)
      {
          z=dol[i]*m;
          if(z>n);else {cn=1; v.pb(z); }
      }

      ll baki;


      for(i=0;i<=y;i++)
      {
          z=eu[i]*k;
         if(z>n);else {cnt=1; v1.pb(z);}
      }


        ll ans,ba;

     if(cn==1 and cnt==1 )
      {
           ba=n-v1[v1.size()-1 ], baki=n-v[v.size()-1 ] ;

           if(ba>=baki)z=baki;
           else z=ba;

           ans=min(z%m, z%5);
       }
       else if(cn)
       {
           z=n-v[v.size()-1 ];
           ans=min(z%m, z%k);
       }
       else
       {
           z=n-v1[v1.size()-1 ] ;
           ans=min(z%m, z%k);
       }
       pfl(ans);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

