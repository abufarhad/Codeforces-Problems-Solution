#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)

ll cnt[105];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

      ll ans=0;
      scl(n);scl(k);
      for(i=1;i<=n;i++)
      {
          cin>>x;
          cnt[x%k]++;
      }
      for(i=1;i< (k+1)/2;i++)ans+=min(cnt[k-i],cnt[i] );
      if(k%2==0)ans+=cnt[k/2]/2;
      ans+=cnt[0]/2;
      pfl(ans*2);


return 0;
}




