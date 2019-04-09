//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define pn                  printf("\n")


int main()
{
    ll m,n,t,i,j,k,x,y,z,l,q,r,t1,t2,t3,h,h1,m1,h2,m3,h3;

    ll cnt=0,ans=0;
    scanf("%lld:%lld",&h,&m);
    scanf("%lld:%lld",&h1,&m1);

    t1=h*60+m;
    t2=h1*60+m1;

    t3=(t1+t2)/2;

    h3=(t3/60);
    m3=(t3)%60;

    printf("%02lld:%02lld\n",h3,m3);

    return 0;
}





