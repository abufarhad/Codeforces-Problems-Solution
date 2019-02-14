//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)

ll a[100005], cnt[100005];

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll ans=0;
    cin>>n>>m;

    fr(i,m)
    {
        cin>>x;
        a[x]++;
        cnt[a[x]]++;
       // cout<<a[x]<<" -> "<< cnt[a[x]]<<endl;
        if(cnt[a[x]] ==n)cout<<"1";
        else cout<<"0";
    }
    return 0;
}




