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
#define endl 	    "\n"
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define N                   100005
ll l[N], r[N];

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,q;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      fr1(i,n)cin>>a[i];

      fr1(i,n)
      {
          if(a[i]> a[i-1] ) l[i]=l[i-1]+1;
          else l[i]=1;
      }

     for(i=n; i>=1;i--)
      {
          if(a[i] < a[i+1] ) r[i]=r[i+1]+1;
          else r[i]=1;
      }
      //fr1(i,n)cout<<l[i]<<" "; pn;
      //fr1(i,n)cout<<r[i]<<" "; pn;
      ans=1;

      fr1(i,n)
      {
          ans=max(ans, l[i-1]+1);
          ans=max(ans, r[i+1]+1);

          if(a[i-1]+1 < a[i+1]  )
          {
              ans=max(ans, l[i-1]+r[i+1]+1 );
              //debug ;pfl(ans);
          }

      }

      pfl(ans);

return 0;
}





