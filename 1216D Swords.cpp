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
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0, mx=-1;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i], mx=max(mx, a[i]);
      if(n>2)
      {
      vector<ll>v;
      fr(i,n)if(a[i]<mx)v.pb(a[i]);

      ll gcd=mx-v[0];
      fr(i,v.size())gcd=__gcd(gcd, (mx-v[i]) );

      fr(i, v.size())ans+=( (mx-v[i])/ gcd);
      cout<<ans<<" "<<gcd<<endl;
      }
      else
      {
       if(a[0]>a[1])cout<<1<<" "<<(a[0]-a[1])<<endl;
       else    cout<<1<<" "<<(a[1]-a[0])<<endl;
      }

return 0;
}

