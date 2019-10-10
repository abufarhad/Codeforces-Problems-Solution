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
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                      s.size()
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0;
    string s,s1;
    cin>>s;
    x=l(s);
    ll cntx=0, cnty=0;
    fr(i,x)
    {
        if(s[i]=='x')  cntx++;
        else  cnty++;
    }
    if(cntx>cnty) {cnt=cntx-cnty; fr(i,cnt)cout<<"x";}
    else {cnt=cnty-cntx;fr(i,cnt)cout<<"y";}

    return 0;
}



