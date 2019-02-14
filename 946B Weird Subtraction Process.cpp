//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll 	 long long

int main()
{
    ll a,b,n,i,l,x,y;
    while(cin>>a>>b)
    {
        for(i=0;; i++)
        {
            if(a==0 or b==0) break;
            else if(a>=2*b) a=a %(2*b);
            else if(b>=2*a) { b=b %(2*a);}
            else break;
        }
        cout<<a<<" "<<b<<endl;
    }
}

