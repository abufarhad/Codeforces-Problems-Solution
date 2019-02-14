
//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll              long long
#define fr(i,n)       for(int i=0;i<n;i++)
int main()
{
    ll m,n,l,k,i,j,ans;
    cin>>n>>m>>k>>l;

    if(m>n)cout<<"-1"<<endl;
    else
    {
        if( n-k >= m-k  && m-k>=l ) ans=(n-k)/m;
        else ans=-1;

        if(ans >0 )cout<<ans<<endl;
        else cout<<"-1"<<endl;
    }

}
