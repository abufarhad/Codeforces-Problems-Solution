
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
ll m,n=3,t,b,c,d,i,j,k,x,k1,y,z,l,q,r;

int main()
{
      ll cnt=0,ans=0;
      ll a[n];
      fr(i,n){cin>>a[i]; ans+=a[i];}
      sort(a, a+n);
      ans/=3;
      if(a[0]+a[1] < ans)ans=a[0]+a[1] ;
      pfl(ans);
}
