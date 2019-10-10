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
int main()
{
    ll m,n,i,j,a,k,b,c,d;
    string s;
    cin>>n>>k>>s;
    if(n==1 and k==1 and s[0]!='0')s[0]='0', k--;

    if(n>1 and k>0 and s[0]!='1')s[0]='1', k--;

    fr1(i,n-1)   if(s[i]!='0' and k>0)s[i]='0', k--;

    cout<<s<<endl;
}

