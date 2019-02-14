//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
* ========================================*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll long long

#define sci(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scd(x) scanf("%lf",&x)
#define scc(x) scanf("%[^\n]s",x); // For charecter string input , It will  read all charecter untill Enter new line .




int main()
{

    ll a[1000],m,n,t,b,c,d,i,j,k,x,y,z,ans=1000;
    scl(n);
    scl(d);

    for(i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);
    ll cnt=0;
    for(i=0; i<n; i++)
    {
        cnt=0;
        for(j=i; j<n; j++)
        {
            if(a[j]-a[i] >d)  break;
            else cnt++;
        }
        ans=min(ans, n-cnt);
    }

    cout<<ans;



    return 0;
}
