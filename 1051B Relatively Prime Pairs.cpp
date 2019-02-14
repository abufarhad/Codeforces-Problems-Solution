//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll 	 long long
#define fr(i,n)           for(int i=0;i<n;i++)
#define fr1(i,n)          for(ll i=1;i<=n;i++)
int main()
{
    ll m,n,k;
    while(cin>>n>>m)
    {
        k=(m-n+1)/2;
        cout<<"YES"<<endl;
        for(ll i=n;i<=m;i++)
        {
            cout<<i<<" "<<i+1<<endl; i++;
        }
    }
}
