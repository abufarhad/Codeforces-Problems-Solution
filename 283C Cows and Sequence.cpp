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
ll ar[200005], a[200005];
int main()
{

      ll m,n,t,b,c,d,i,j,k,x,y,z=0,l,q,p,r;
      double ans=0.0;
      scl(n);
      a[1]=0;
      ll cnt=1;
      while(n--)
      {
          cin>>p;
          if(p==1)
          {
              cin>>x>>y;
              ar[x]+=y;
              ans+=(x*y);
          }
          else if(p==2)
          {
              cin>>x;
              ans+=x;
              cnt++;
              a[cnt]=x;
          }
          else
          {
             ans-=(ar[cnt] +a[cnt] );
             ar[cnt-1]+=ar[cnt];
             ar[cnt]=0;
             cnt--;
          }
          double res=ans/cnt ;
          printf("%.12lf\n", res);
      }

return 0;
}

