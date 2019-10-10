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
#define endl 	    "\n"
#define pb                  push_back

int main()
{
    ll m,n,i,j,k=1,x,y,ans=1;
    cin>>n;
    ll a[n];
    fr(i,n)cin>>a[i];
    sort(a,a+n);
    fr(i,n)if(a[i]>=ans)ans++;

    pfl(ans-1);


}
