//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
int main()
{
    string s;
    ll n,m,i,r=0;
    cin>>s;
    ll l=s.length();
    fr(i,l)
    {
        r=r*10+s[i]-'0';
        cout<<r<<endl;
    }
    r%=4;
    //cout<<endl<<r<<endl;
    if(r==0)cout<<"4"<<endl;
    else cout<<"0"<<endl;
}

/*
int main()
{
    string s;
    ll n,m,i,r=0,ans=0;
    cin>>s;
    ll l=s.length();
    fr(i,l)
    {
        r=r*10+s[i]-'0';
        r%=4; //cout<<r<<" ";
    }
    //cout<<r<<" "<<endl;
    for(i=1;i<5;i++){ans+=pow(i,r); ans%=5;}
    cout<<ans;

//    if(r==0)cout<<"4"<<endl;
//    else cout<<"0"<<endl;
}
*/

