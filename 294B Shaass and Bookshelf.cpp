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
#define N 100006
ll cum_sum[105];
int main()
{

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      vector<pair<ll,ll> >t;
      fr(i,n)
      {
          cin>>x>>y;
          t.pb(make_pair(y,x) );
      }
      sort(t.begin(), t.end());
      reverse(t.begin(), t.end());
      cum_sum[0]=t[0].second;

      fr1(i,n)
      {
          cum_sum[i]+=cum_sum[i-1]+t[i].second;
          //cout<<t[i].first<<" "<<t[i].second<<endl;
      }
      fr(i,n)
      {
          x=cum_sum[n-1]-cum_sum[i];
          if(cum_sum[i]-x >0 ){ans=cum_sum[i];break;}
      }
      pfl(ans);

return 0;
}

