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
ll k;
bool check(ll n,ll x, ll y)
{
    if(n/x - y > (k-1) )return 1;
    return 0;
}

int main()
{

    ll m,n,t,b,c,d,i,j,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(k);
      vector<ll>v,v1;
       y=(k*(k-1))/2;
      if(k>1000001)cout<<"-1"<<endl;
      else
      {
          ll mx=-1;
          for(i=1;i*i<=n;i++)
          {
              if(n%i==0)
              {
                  x=n/i;
                  if( check(n, x, y)) mx=max(mx,x);
                  if( check(n, i, y))  mx=max(mx,i);
              }
          }
          z=0;
         // cout<<mx<<endl;
         if(mx>0)
         {
          for(i=1;i<k;i++)
          {
              z+=mx*i;
              y=mx*i;
             v1.pb(y);
          }
          //cout<<z<<" "<<n-z<<endl;
          if( n-z <=0 or (n-z) <=y )cout<<"-1"<<endl;
          else {v1.pb(n-z ); fr(i, v1.size())cout<<v1[i]<<" "; pn; }
         }
         else cout<<"-1"<<endl;

      }
return 0;
}
