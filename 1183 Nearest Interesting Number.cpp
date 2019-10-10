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
#define N 100006

ll calc(ll num)
{
    ll sum=0;
    while (num != 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    while(cin>>n)
    {
        ll cnt=0,ans=n;
        d=calc(n);
      //  cout<<d<<endl;
        if(d%4!=0)
        while( 1)
        {
            if(d%4==0 )break;
            n++;
            d=calc(n);
        //    cout<<d<<endl;
            ans=n;
        }
        pfl(ans);
    }
    return 0;
}




