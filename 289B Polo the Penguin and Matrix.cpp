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
int main()
{

    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(m);scl(d);
      x=n*m;
      ll  a[n][m], b[x];
      k=0;
      fr(i,n)fr(j,m)cin>>a[i][j], b[k]=a[i][j],k++;

      sort(b,b+k);
      fr(i,k-1)if(b[i]%d != b[i+1]%d )cnt=1;
      if(cnt!=1)
      {
          x=k/2;
          //cout<<b[x];

          fr(i,k)ans+=abs( b[i]-b[x]);
          ans=ans/d;
          cout<<ans<<endl;
      }
      else cout<<"-1"<<endl;
return 0;
}



