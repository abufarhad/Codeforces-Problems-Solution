//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    string s;

    while(cin>>k>>s)
    {
    string s1,s2;
    ll cnt=0,cn=1;
    n=s.size();

    for(i=0;i<n-1;i++)
    {
      if(s[i]!=s[i+1] && s[i]>s[i+1] ){m=i;break;}
      else cn++;
    }

    if(cn==n)cnt=0;
    else  for(i=m;i<n-1;i++)  if(s[i] > s[i+1]) {cnt=1,x=i+1;break;}

    if(cnt==1) {for(i=m;i<=x;i++)s1+=s[i]; s2=s1; reverse(s2.begin(), s2.end() ); }// cout<<s1<<" "<<s2<<endl;}

    if(s1!=s2&&cnt==1) cout<<"YES"<<endl<<x<<" "<<x+1<<endl;
    else cout<<"NO"<<endl;

    }

    return 0;
}




