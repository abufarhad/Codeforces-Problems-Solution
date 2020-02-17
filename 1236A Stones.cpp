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
#define scc(c)	            scanf(" %c", &c);
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define tcas(i,t)           for(ll i=1;i<=t;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;


    scl(t);
   fr(i,t)
    {
        cin>>x>>y>>z;
        ll cnt=0,ans=0;

        while(y>0 and  z>1)
        {
            ans+=3;
            y--, z-=2;
        }
        while(x>0 and  y>1)
        {
            ans+=3;
            x--, y-=2;
        }

        pfl(ans);
    }

    return 0;
}
