//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
struct Seller
{
    ll first,second,diff;
} a[200005];

bool cmp(Seller p, Seller q)
{
    return ( p.diff>q.diff);
}
int main()
{
    ll n,m,i,j,ans=0;
    cin>>n>>m;

    for(i=0; i<n; i++) cin>>a[i].first;
    for(i=0; i<n; i++) cin>>a[i].second;
    for(i=0; i<n; i++)
    {
        a[i].diff=(a[i].second-a[i].first );
    }

    sort(a,a+n,cmp);

//    for(i=0;i<n;i++) cout<<a[i].first<<" ";
//    cout<<endl;
//    for(i=0;i<n;i++) cout<<a[i].second<<" ";

    for(i=0; i<m; i++) ans+=a[i].first;

    for(i=m; i<n; i++) ans+=min(a[i].first, a[i].second);

    cout<<ans<<endl;
}
