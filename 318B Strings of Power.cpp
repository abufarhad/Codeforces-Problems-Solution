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

int main()
{
    ll i,j,k,m,n,l,cnt=0,hv=0;
    string s,p, str1="heavy", str2="metal";
    cin>>s;
    l=s.size();

    fr(i,l)
    {
       if(s.substr(i,5)==str1) hv++;
       else if( s.substr(i,5)==str2) cnt+=hv;
    }
    cout<<cnt<<endl;
}
