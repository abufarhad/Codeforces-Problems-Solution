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

int main()
{
    ll m,n,a,b,i,res,x,y,p;
    ll t;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        m=n%2;
        p=n/2;
        res=((m+p)*x)-p*y;
        cout<<res<<endl; }
        return 0;
}
