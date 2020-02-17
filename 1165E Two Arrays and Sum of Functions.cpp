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
#define md                  998244353
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)

#define N 100006

int main()
{

    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n], b[n];
      fr(i,n)cin>>a[i];
      fr(i,n)cin>>b[i];

    /// For all sub array we can see 1st element found n time , 2nd element found 2*(n-1) time
    /// , 3rd 3*(n-2) time and so on..
    /// so, first we multiply with first array every element with this  n, 2*(n-1) , 3*(n-2) ....


      fr1(i,n) a[i-1]*=(i%md )*(n-i+1 ) ;

      fr(i, n)cout<<a[i]<<" "; pn;


      asort(a);
      dsort(b);

      fr(i,n) ans+=(a[i]%md * b[i]%md )%md,  ans%=md;

      pfl(ans);

return 0;
}




