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
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")
#define mx               (1<<28)


int main()
{
    ll m,n,i,k=0,l,j ;

    cin>>n;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){ k=i;
            break;}
    }
    if(k==0)cout<<"1\n";
    else
        cout<<(n-k)/2 +1<<endl;

}
