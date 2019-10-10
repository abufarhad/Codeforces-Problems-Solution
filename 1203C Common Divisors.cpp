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

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i];
      if(n==1)ans=a[0];
      else
      {
          if(n==2)ans=__gcd(a[0], a[1]);
          else
          {
              ans=__gcd(a[0], a[1]);
              for(i=2;i<n;i++)
              {
                  ans=__gcd(ans, a[i]);
              }
          }
      }
     // pfl(ans);
      vector<ll>v;

      fr1(i, sqrt(ans)) if(ans%i==0)v.pb(ans/i), v.pb(i);
      set<ll>st;
      fr(i,v.size())st.insert(v[i]);

      cout<<st.size()<<endl;

return 0;
}

