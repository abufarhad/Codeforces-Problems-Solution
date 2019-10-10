#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

#define N 100006

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];

      for(i=0;i<n;i++)   cin>>a[i];
      sort(a,a+n);
      fr(i,n) if(a[i]>=cnt )ans++, cnt+=a[i];
      pfl(ans);

return 0;
}





