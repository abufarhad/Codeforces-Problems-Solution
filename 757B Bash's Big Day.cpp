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


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,cn=0,ans=1;
      scl(n);
     map<ll,ll>mp;

      while(n--)
      {
          cin>>x;
          for(i=2;i*i<=x;i++)
          {
              if(x%i==0)mp[i ]++;

              while(x%i==0)x/=i;
          }
          if(x>1)mp[x ]++;
      }
      map<ll,ll>::iterator it;

      for(it=mp.begin();it!=mp.end();it++)
      {
          //cout<<it->second;
          ans=max(ans, it->second);
      }
      pfl(ans);



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1


