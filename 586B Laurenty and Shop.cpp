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
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)

int main()
{

    ll m,n,t,d,i,j,k,x,y,z,l,q,r;

      ll cnt=0,ans=0;
      scl(n);
      ll  a[n],b[n], c[n];
      fr(i,n-1)cin>>a[i];
      fr(i,n-1)cin>>b[i];


      fr(i,n)
      {
          cin>>c[i];
          fr(j,n-1)
          {
              if(j<i)c[i]+=a[j];
              else c[i]+=b[j];
          }
      }
      sort(c,c+n);

      pfl(c[0]+c[1]);

return 0;
}


