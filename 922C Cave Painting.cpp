//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back

int main()
{
    ll m, n;
    while(cin>>m>>n)
    {
        ll cnt=0;

        set<ll>s;
        ll tmp=1e5;
        ll mn=min(n, tmp);
        //pfl(mn);
        fr1(i, mn)  s.insert(m%i);

        if(s.size()!=mn)cnt=1;

        if(cnt)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

