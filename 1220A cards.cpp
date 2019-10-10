
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
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    string s;
    cin>>n>>s;
     ll cnt=0,zro=0;

    fr(i, l(s))
    {
        if(s[i]=='z')zro++;
        else if(s[i]=='n')cnt++;
    }
    fr(i, cnt)cout<<1<<" ";
    fr(i, zro)cout<<0<<" ";

return 0;
}
