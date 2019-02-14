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
    ll m,n,l,k;
   string s;
    while(cin>>k>>s)
    {
    ll ans=0;
       n=s.size();
       sort(s.begin(), s.end());
      // cout<<s<<endl;
        fr(i,n){ k-=s[i]-'0';}

        fr(i,n){if(k>0){ k-=9-(s[i]-'0'); ans++; } }
        cout<<ans<<endl;
}
return 0;
}

