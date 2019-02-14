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
    ll m,n,t,b,c,d,i,j,k,x,z,l,q,r,y=100000000;

    ll cnt=0,ans=0;
    scl(n);
    ll  a[n];
    vector<ll>v;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v.pb(x);
        if(x>0) ans+=x;
    }
    sort(v.begin(),v.end());


    fr(i,n)
    {
        if(v[i]%2)
        {
            y=min(y, abs(v[i]));
        }
  }
    if(ans%2==0)ans-=y;
    pfl(ans);

    return 0;
}




