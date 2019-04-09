#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      vector<ll>v[2*n];
      for(i=0;i<2*n;i++)
      {
          cin>>x;
          v[x].pb(i);
      }
      ans=v[1][0]+v[1][1];
      for(i=2;i<=n;i++)
      {
          ans+=abs( v[i][0] - v[i-1][0] )   + abs( v[i][1] - v[i-1][1]);
      }
      pfl(ans);

return 0;
}




