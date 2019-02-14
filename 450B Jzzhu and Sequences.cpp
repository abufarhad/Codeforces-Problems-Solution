//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
int main()
{
    ll n,m,i,j,ans=0,x,y,a[10];

    cin>>x>>y>>n;
    a[1]=x, a[2]=y, a[3]=y-x ,a[4]=-x, a[5]=-y, a[0]=x-y;

    ans=a[n%6]%mod;
    if(ans<0) ans+=mod;

    cout<<ans<<endl;
}
