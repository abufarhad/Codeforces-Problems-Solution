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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+2*n,greater<int>())


int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=-1;
      scl(n);
      ll  a[2*n];
      set<ll>s;

      fr(i, 2*n) cin>>a[i], s.insert(a[i]);

      dsort(a);

      if(s.size() !=1){
      cout<<a[0]<<" ";
     for(i=1; i<2*n ; i++ ) cout<<a[i]<<" ";
      }
      else
      pfl(ans);


return 0;
}




