#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define pfl(x)              printf("%lld\n",x)
int main()
{
    ll i,j,a,b,c,cnt,cn,n,k;
    while(cin>>n>>a>>b>>c)
    {
       ll ans=-1;
       fr(i,n+1)
       fr(j,n+1)
       {
           k=n-(a*i+b*j);
           if(k>=0 && k%c==0 ) ans=max(ans, (i+j+k/c) );
       }
       pfl(ans);
    }
    return 0;
}

