#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pn                  printf("\n")
#define pb                  push_back
ll x,y;
int main()
{
    ll m,n,t,b,c,s,d,i,j,k,z,sum=0;
    while(cin>>b>>d>>s)
    {
      ll ans=0;
      ll mx=max({b,d,s})-1;         /// -1 cz between this 3 time onece he left

      ans=( max(0ll , mx-b )) +( max(0ll , mx-d )) + ( max(0ll , mx-s ));   ///otherwise he miss so take max
      pfl(ans);


    }
}
