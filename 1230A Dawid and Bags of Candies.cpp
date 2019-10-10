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
    ll m,n,i,j,a,b,c,d;
    cin>>a>>b>>c>>d;

    if((a+b)==(c+d) || (a+c)==(b+d) || ( a+d)==(b+c) || a==(b+c+d) ||b==(a+c+d) || c==(b+a+d) || d==(b+c+a)  )cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
