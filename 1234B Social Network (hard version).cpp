#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"

map<ll, bool>mp;
deque<ll>dq;
int main()
{
    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);scl(k);

      fr(i,n)
      {
          scl(x);
          if(mp[x])continue;
          if(cnt==k)
          {
              cnt--;
              mp[dq.back() ]=0;
              dq.pop_back();
          }
          dq.push_front(x), mp[x ]=1; cnt++;
      }

      cout<< dq.size()<<endl;
      for(auto it: dq)printf("%lld ", it);

return 0;
}
