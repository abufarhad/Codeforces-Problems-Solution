//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)            scanf("%lld",&x)
#define dsort(a)        sort(a,a+n,greater<int>())

int main()
{
    ll m,n,t,b,c,d,i,j,k,y,z,l,ans=0,q;

    cin>>n;

    ll a[n], x=n;
    fr(i,n)cin>>a[i];

   dsort(a);
   //fr(i,n)cout<<a[i]<<" ";

   fr(i,x) {ans+=abs(n- a[i]);n--;}//  cout<<ans<<" ";}
   cout<<ans<<endl;

return 0;
}





