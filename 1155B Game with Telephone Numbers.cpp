//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,v,p,z,l,q,r;
    ll cnt=0,ans=0;
    string s,s1;
    while(cin>>n>>s)
    {
        cnt=0;
        k=n-11, p=k/2;
        fr(i,k+1) if(s[i]=='8')
        {
            cnt++;
        }

        // cout<<k<< " "<<cnt<<endl;
        if(cnt>p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}




