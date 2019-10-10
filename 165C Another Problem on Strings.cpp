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
#define fr1(i,n)            for(ll i=1;i<=n;i++)
ll cnt[1000006];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll ans=0, one=0;
      string s;
      cin>>k>>s;
      l=s.size();
      cnt[0]=1;
      fr(i, l)
      {
          if(s[i]=='1' )one++;
          if( one>=k )  ans+=cnt[one-k];
           ++cnt[one];
      }
      pfl(ans);

return 0;
}




