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
vector<ll>v;

ll find_all_divisor(ll n){  fr1(i,sqrt(n)){   ll x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

ll cnt=0,ans=0;
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
      scl(t);
      while(t--)
      {
      cnt=0;
      scl(n); ll a[n];
      for(i=0;i<n;i++) cin>>a[i];

      asort(a);
      ans=a[0]*a[n-1];
      find_all_divisor(ans);
      //cout<<v.size()<<endl;

      fr(i,n)if(ans%a[i] !=0 )cnt=1;

      if(cnt==1  || v.size() !=n+2 )ans=-1;
      pfl(ans);
      v.clear();
      }
return 0;
}




