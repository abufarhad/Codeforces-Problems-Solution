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


int main()
{
      ll m,n,t,b,c,d,i,j,k=0,x,y,z,l,q,r;
      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i];
      asort(a);

      fr(i,n-1)  if(2*a[k] <= a[i+1])cnt++, k++;

      ans=n-min(n/2, cnt);
      pfl(ans);
return 0;
}
