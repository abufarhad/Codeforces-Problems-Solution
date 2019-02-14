//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

ll Sum_digit(ll n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n/10;
    }
    return sum;
}


int main()
{
    ll m,n,i,a=0,b,c,d,cnt=0,ans,x,y;
    cin>>n;

    x=log10(n)+1;

    for(i=0; i<x-1; i++)
        a=(a*10)+9;

      //  cout<<a<<endl;

    b=n-a;

    ans=Sum_digit(b)+Sum_digit(a);


    cout<<ans;
    return 0;
}
