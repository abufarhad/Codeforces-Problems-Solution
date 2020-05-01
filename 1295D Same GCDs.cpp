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
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


ll phi(ll n)
{
    ll i, j;
    ll ans=n;
    for(i=2; i*i<=n;i++)
    {
        if(n%i)continue;
        while(n%i==0)  n/=i;

        cout<<ans<<" "<<i<<endl;
        ans= (ans/i)*(i-1);
        cout<<ans<<" "<<i<<endl;

    }

    if(n>1)ans=(ans/n)*(n-1);

    return ans;
}


int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
    ll a, m,n;
    ll cnt=0,ans=0,sum=0;

    cin>>a>>m;

    /*
    Basic logic behind this problem is contradiction.

    gcd=__gcd(a, m);
    x=a/gcd;
    y=m/gcd;

    Here we can see that if we divided with gcd there must

    __gcd(x, y)==1

    For that if we calculate co-primes w.r.t   y than the number of co-primes will be the answer.
    This calculate up to (y-1) or (m-1) .
    */

    ans=phi( (m/__gcd(a, m)) );
    pfl(ans);
    }
return 0;
}


