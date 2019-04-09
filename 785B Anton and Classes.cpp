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

int main()
{
    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    ll  a[n+1], b[n+1];
    vector<ll>v,v1,v2,v3;
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }

    scl(m);
    ll ar[m+1],br[m+1];

    fr(i,m)
    {
        cin>>ar[i]>>br[i];
    }

    asort(b);
    sort(ar,ar+m,greater<int>());
    x=ar[0]-b[0];

    dsort(a);
    sort(br,br+m);
    y=a[0]-br[0];

    ans=max(x,y);


    if(ans>0)
        pfl(ans);
    else
        pfl(cnt);

    return 0;
}




