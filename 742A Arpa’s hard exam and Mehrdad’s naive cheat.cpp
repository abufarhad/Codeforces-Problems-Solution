//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)           for(int i=0;i<n;i++)
int main()
{
    ll n,m;
    cin>>n;

    m=n%8;
    //cout<<m<<endl;
    if(n==0)        {cout<<"1"<<endl;}
    else if(m==0){cout<<"6"<<endl;}
    else if(m==1){cout<<"8"<<endl;}
    else if(m==2){cout<<"4"<<endl;}
    else if(m==3){cout<<"2"<<endl;}
    else if(m==4){cout<<"6"<<endl;}
    else if(m==5){cout<<"8"<<endl;}
    else if(m==6){cout<<"4"<<endl;}
    else if(m==7){cout<<"2"<<endl;}


}
