//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,k,ans=1;
    cin>>m>>n;
    if(m>=n)
    {
        fr1(i,n) ans*=i;
    }
    else
    {
        fr1(i,m) ans*=i;
    }

    cout<<ans<<endl;

}
