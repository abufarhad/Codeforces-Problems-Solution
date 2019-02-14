//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;



#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,i,j;
    string s,s1,s2,s3,s4,s5;
    cin>>s>>s1>>s2>>s3>>s4>>s5;

    if(s[0] == s1[0] ||s[0] == s2[0] ||s[0] == s3[0] ||s[0] == s4[0] || s[0] == s5[0]  )
        cout<<"YES"<<endl;
    else if( s[1] == s1[1] ||s[1] == s2[1] ||s[1] == s3[1] ||s[1] == s4[1] || s[0] == s5[1] )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
