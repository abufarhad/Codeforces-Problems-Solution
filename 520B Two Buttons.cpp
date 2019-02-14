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

    ll m,n,t,b,c,d,i,j,k,x,y,z,ans,cnt=0;
        cnt=0;
        cin>>n>>m;
        while(n<m)
        {
            cnt+=m%2;
            m++;
            m/=2;
            cnt++;
        }
        x=(n-m);
        ans=x+cnt;
        cout<<ans<<endl;

    return 0;
}

