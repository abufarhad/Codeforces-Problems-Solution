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
    ll m,n;
    while(cin>>n>>m){
    ll i,k,ans=0;

    if(m>n*n) ans=0;
    else
    for(i=1;i<=n;i++){if(m/i <=n && m%i==0) ans++;}//cout<<i<<" ";
    cout<<ans<<endl;
}
}
