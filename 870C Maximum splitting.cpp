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
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)


int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    for(i=0; i<n; i++)
    {
        cin>>x;

        if( x<=3 || x==5 || x==7  || x==11 ) cout<<"-1"<<endl;
        else { if(x%2==1) pfl((x/4)-1 ); else pfl(x/4);}

    }
        return 0;
}





