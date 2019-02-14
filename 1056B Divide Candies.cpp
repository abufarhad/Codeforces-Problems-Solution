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
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back
#define ps                 printf(" ")
#define dsort(a)        sort(a,a+n,greater<int>())
#define asort(a)        sort(a,a+n)
#define mod             10000007
#define mx               (1<<28)
#define Pi                  2*acos(0.0)

int main()
{
    ll m,n,i,j,k,ans=0;
    cin>>n>>m;

    fr1(i,m)
    {
        fr1(j,m)
        {
           if((i*i+j*j)%m==0){
            ans+=(((n-i+m )/m) *((n-j+m)/m));
           cout<<((n-i+m )/m)<<" "<<((n-j+m )/m)<<endl;}
        }
    }
    cout<<ans<<endl;
}
