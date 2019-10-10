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
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define N 200005
ll freq[N], cost[N];
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=1e9;
      scl(n);scl(k);
      ll  a[N];
      fr(i,n)cin>>a[i];

      fr(i,N)freq[i]=0, cost[i]=0;

      asort(a);
      fr(i,n)
      {
          x=a[i], c=0;

          while(x)
          {
              //debug;
              cout<<freq[x]<<" "<<k<<endl;
              if(freq[x]<k)
              {
              freq[x]++;
              cost[ x]+=c;
              }
              x/=2;
              c++;
          }
      }

      fr(i, N)   if(freq[i]==k) ans=min(ans, cost[i]);

      pfl(ans);

return 0;
}
