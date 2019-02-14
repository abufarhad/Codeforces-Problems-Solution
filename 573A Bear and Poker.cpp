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
#define sortD(a)        sort(a,a+n,greater<int>())
int main()
{
    ll m=0,n,k,l,a[100005],i;
    cin>>n;

    fr(i,n){cin>>a[i]; while( a[i]%2==0 ) a[i]/=2; while ( a[i]%3==0) a[i]/=3;}

    for(i=1;i<n;i++) { if(a[i]!=a[i-1]) {   m=1;  break; }}

    if(m==1)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;

}
