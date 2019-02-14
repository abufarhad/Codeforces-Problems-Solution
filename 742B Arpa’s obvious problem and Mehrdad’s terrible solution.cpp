//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
//#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define pn                 printf("\n")
#define mx 1000005
ll a[mx],b[mx];
int main()
{
    ll m,n,l,i,j,x;

        cin>>n>>x;
        ll  ans=0;

        fr(i,n)
        {
            cin>>a[i];
            b[a[i] ]++;
        }

        fr(i,n)
        {
            b[a[i] ]--;
            //cout<<" "<<b[a[i] ]<<" = "<<(a[i]^x)<<" - "<<b[a[i]^x ]<<endl;
            ans+=b[a[i]^x ];
        }
        printf("%lld\n",ans);

}
