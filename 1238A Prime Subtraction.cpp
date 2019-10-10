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
int main()
{
    ll m,n,i,j;
    cin>>i;
    while(i--)
    {
    scl(m), scl(n);

    if(m%2==0 and n%2==0)cout<<"YES"<<endl;
    else if ((m%2==1 and n%2==0 ) ||( m%2==0 and n%2==1))
    {
        if( m-n >=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
    }
}
