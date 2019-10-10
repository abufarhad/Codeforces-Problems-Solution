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
ll a[200005];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    for(i=0; i<n; i++)   cin>>a[i] ;

    for(i=0;i<=n;++i)
    {
        if(a[i]<0 )cnt=1;
        if(a[i]%2 !=0)a[i+1]--;
    }
    if(cnt==0)  cout<<"YES\n";
    else      cout<<"NO\n";


    return 0;
}




