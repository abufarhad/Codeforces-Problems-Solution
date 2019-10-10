#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
int main()
{
      ll m,n,t,b,c,d,i,j,k=0,x,y,z,l,q,r;

      ll cnt=0,ans=0, mn=INT_MAX;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i];
      for(i=n-1;i>=0;i--) if(a[i] <a[i-1]) {k=i;break;}
      pfl(k);

return 0;
}

