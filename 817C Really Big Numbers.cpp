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
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")


ll sum_of_digit(ll n)
{
    ll sm=0;
    while(n!=0)
    {
        sm+=n%10;
        n/=10;
    }
    return sm;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r,mid,ans=0;

    cin>>n>>k;
    l=1,r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        //cout<<mid<<" "<<sum_of_digit(mid)<<endl;
        if( (mid- sum_of_digit(mid)) >=k)
        {
            ans=n-mid+1;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    pfl(ans);

return 0;
}





