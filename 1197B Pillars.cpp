//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define N 200006
ll  a[N], b[N];
int main()
{
    ll m,n,t,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0, mx=-1,sv,mn;
    scl(n);

    fr1(i,n){cin>>a[i];  if(a[i]>mx)mx=a[i], sv=i; }

    for(i=sv+1;i<n;i++)  if(a[i]<a[i+1] )ans=1;
     for(i=1;i<sv;i++)    if(a[i]>a[i+1] )ans=1;

    if(ans)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

return 0;
}



