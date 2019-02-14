//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

int main()
{

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans,t1,t2,t3;
    while(cin>>x>>y>>z>>t1>>t2>>t3)
    {
        int ele=(abs(x-z)*t2)+2*t3+(abs(x-y)*t2)+t3;
        int str= abs(x-y)*t1;

        if(ele>str) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }



return 0;
}
