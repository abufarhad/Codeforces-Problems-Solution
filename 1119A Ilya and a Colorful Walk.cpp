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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

int main()
{
    ll cnt=0,ans=0,n;
    while(cin>>n)
    {
    ll m,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll  a[n];
    fr(i,n) cin>>a[i];
    for(i=n-1;i>=0;i--) if(a[0] !=a[i]) {m=i; break;}
    fr(i,n) if(a[n-1]!=a[i]){d=i; break;}
    //cout<<m<<" "<<d<<endl;
    cout<<max(m, (n-d-1) )<<endl;
    }
return 0;
}





