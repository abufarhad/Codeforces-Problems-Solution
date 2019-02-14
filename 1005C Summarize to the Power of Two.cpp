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

int main()
{
    ll m,n,i,k,l,j, pow[63], ans=0;

    fr(i,62) pow[i]=1<<i;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    fr(i,n){ cin>>a[i]; mp[a[i] ]++;}

    vector<ll>v;
    set<ll>s;
    fr(i,n)
    {
        ll flag=0;
        fr(j,62)
        {
            ll diff=pow[j]-a[i];
            //cout<<pow[j]<<" "<<a[i]<<" "<<tmp<<" "<<endl;
            if(diff==a[i])
            {
                if(mp[diff]>1) flag=1;
            }
            else
            {
                if(mp[diff]>0) flag=1;
            }
        }
        if(flag==0) ans++;
    }

    cout<<ans<<endl;
}
