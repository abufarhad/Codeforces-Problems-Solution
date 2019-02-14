//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define mx               (1<<28)
int main()
{
    ll m,n,i,k,l,j, pow[63], ans=mx;

    cin>>n;
    for(i=1;i<=n;i+=2)
    {
        ans=min(ans, (i+(i+1) ) % (n+1) );
    }

    cout<<ans<<endl;
}
