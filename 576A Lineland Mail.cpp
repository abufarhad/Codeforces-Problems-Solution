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
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,mn,mx;

    ll cnt=0,ans=0;
    scl(n);
    ll  a[n];
    a[0]=3000000000;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    fr1(i,n)
    {
        mn=min( abs(a[i]-a[i-1]), abs(a[i+1]-a[i] ));
        mx=max(abs(a[i]-a[1]), abs(a[i]-a[n]) );

        cout<<mn<<" "<<mx<<endl;
    }


    return 0;
}




