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

int main()
{
    ll n,m,k, x;
    cin>>x;
    while(x--)
    {
    ll ans=0;
    cin>>n>>m>>k;

    ll x=0,y=k, p,q;
    while(x<=y)
    {
        ll mid=(x+y)/2;
        if(n+mid > (m+(k-mid ) ) )  y=mid-1, ans=( k-mid+1 );
        else x=mid +1;
    }

    pfl(ans);


    }
}
