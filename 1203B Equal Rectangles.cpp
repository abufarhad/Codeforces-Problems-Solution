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
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(t);
      while(t--)
      {
      cnt=0;
      scl(n);
      ll  a[4*n+1];
      set<ll>s;
      fr(i,4*n)cin>>a[i];
      sort(a, a+4*n);
      ll p=a[0]*a[4*n-1];

      for(i=0;i<2*n;i+=2)
      {
          if(a[i]!=a[i+1] or a[4*n-1-i]!=a[4*n-2-i] or a[i]*a[4*n-1-i] !=p){cnt=1;break;}
      }

      if(cnt==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

      }
return 0;
}


