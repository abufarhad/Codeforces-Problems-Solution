//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .



ll cnt,ans,s, a[500005],i;
int main()
{
    ll m,n,t,b,d,j,k,x,y,z;
        scl(n);

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }

        for(i=0; i<n-1; i++)
        {
            if(3*a[i]==2*a[n-1]) ans+=cnt;
            if(3*a[i]==a[n-1]) cnt++;
        }

        cout<<ans<<endl;
    return 0;
}
