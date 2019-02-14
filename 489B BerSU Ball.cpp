//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long
#define fr(i,n)        for(int i=0;i<n;i++)
#define fr1(i,n)        for(ll i=1;i<=n;i++)


int main()
{

    ll m,n,t,a[105],b[105],cnt=0;
    cin>>n;
    fr(i,n)cin>>a[i];
    cin>>m;
    fr(i,m)cin>>b[i];

    sort(a,a+n); sort(b,b+m);

    fr(i,n)
    {
        fr(j,m)
        {
            if( (a[i]-b[j]== 1) or  (a[i]-b[j]== 0)  or  (a[i]-b[j]== -1)  )
            {b[j]=1000; cnt++ ; break; }
        }

    }
    cout<<cnt<<endl;
    return 0;
}
