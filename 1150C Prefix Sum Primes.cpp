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
#define pb                  push_back
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")


ll cnt[3];
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll sum=0,ans=0;
    scl(n);
    ll  a[n];
    fr(i,n)
    {
        cin>>a[i];
        cnt[a[i] ]++;
    }

    if(cnt[2]>=1 )
    {
        cout<<2<<" ";
        cnt[2]--;
    }

    if(cnt[1] )
    {
        cout<<1<<" ";
        cnt[1]--;
    }

    while(cnt[2]-- )
    {
        cout<<2<<" ";
    }
    while(cnt[1]-- )
    {
        cout<<1<<" ";
    }





    return 0;
}




