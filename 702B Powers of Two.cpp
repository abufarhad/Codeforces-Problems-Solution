//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define debug           printf("I am here\n")

int main()
{
    ll m,n,k,l,i,j,ans=0;
    ll dp[35];

    cin>>n ;
    ll a[n];
    map<ll,ll>mp;

    fr(i,n)
    {
        cin>>a[i], mp[a[i] ]++;
    }

    fr(i,32)                                                         /// ai+aj 10^9 er majhei thakbe bola ache tai 2^31 porjnt ber krlei hbe
    {
        dp[i]=1ll<<i;
    }

    fr(i,n)
    {
        fr(j,32)
        {
            ll tmp=dp[j]-a[i];                           ///To know the diff from a[i];
            //cout<<dp[j]<<" "<<a[i]<<endl;
            if(tmp==a[i]) {ans+=mp[tmp]-1;}  /// if found tmp nijer ta badh diye bakita hisab korchi
            else ans+=mp[tmp];                 /// na paile jdi thake tobe 1 add hbe na hole 0 add hbe
        }
    }

    ans>>=1;                                 /// cz (4,12)=16, (12,4)=16 eta 1 tai pair dhora hy, r upore seta 2 bar hbe tai 2 diye div
    cout<< ans <<endl;
}
