//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long
int main()
{
    ll m,n,i,k, mx=0, a[10000];
    set<ll>s;
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>m;
        a[m]++;
        if(a[m]>mx) mx=a[m];
    }
    cout<<n-mx;
    return 0;
}

