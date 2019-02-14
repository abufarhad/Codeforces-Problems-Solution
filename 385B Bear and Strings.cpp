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
    ll m=0,n,i,l,j, ans=0;
    string s,s1="bear";
    cin>>s;
    l=s.size();

    fr(i,l)
    {
        ll cnt=0, k=0;
        for(j=i; j<l; j++)
        {
            if(s[j]==s1[0])cnt=1;
            else  if(s[j]==s1[cnt])cnt++;
            else cnt=0;

            if(cnt==4) k=1;
            ans+=k;
        }
    }
    cout<<ans<<endl;
}
