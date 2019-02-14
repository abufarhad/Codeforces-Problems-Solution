//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long


int main()
{
    ll m,n,t,a,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>x>>y;
        if(a==x && b==y)
            cout<<a<<" "<<y<<endl;
        else if( b!=y)
            cout<<b<<" "<<y<<endl;
        else if( a!=x)
            cout<<a<<" "<<x<<endl;
    }


    return 0;
}




