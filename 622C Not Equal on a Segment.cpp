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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);scl(q);
      ll  a[n];
      ll nxt[200005];
      nxt[n]=n;
      for(i=1;i<=n;i++)
      {
          scl(a[i]);
      }
      for(i=n-1;i>=1;i--)
      {
          if(a[i]==a[i+1])nxt[i]=nxt[i+1];
          else nxt[i]=i+1;
      }

      while(q--)
      {
          scl(x),scl(y),scl(m);
          if(a[x]!=m)pfl(x);
          else if (nxt[x]<=y)pfl(nxt[x]);
          else printf("-1\n");
      }
return 0;
}



