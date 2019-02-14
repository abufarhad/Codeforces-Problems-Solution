//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)        for(int i=0;i<n;i++)
ll ok[200015],b[200015];
int main()
{
    ll n,i,k,l,ans,m;
    cin>>n;
    ll  p;
    queue<ll>q;

    fr(i,n)
    {
        cin>>p;
        q.push( p);
    }
    fr(i,n) scanf("%lld",&b[i]);
    fr(i,n)
    {
        cin>>m;
        ans=0;
        if(ok[b[i] ])
        {
            ans=0;
            cout<<ans<<' ';continue;
        }

        else{
        while(true)
        {
            ll g=q.front();
            ok[g]=1;
            ans++;
            q.pop();
            if(b[i]==g)break;
        }
        cout<<ans<<' ';
    }
  }
}
