#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,cn=0,ans=0;
    cin>>n>>x>>y;

    ll  a[n];
    fr1(i,n)cin>>a[i];

     fr1(i, n)
     {
         cnt=0;
         for (j=i-x; j<i;j++)
         {
             if(j>0 && a[j]<a[i] )cnt=1;
         }
         for(j=i+1; j<=i+y;j++)
         {
             if(j<=n && a[j]<a[i])cnt=1;
         }
         if(cnt!=1){cout<<i<<endl;break;}
     }
    return 0;
}


