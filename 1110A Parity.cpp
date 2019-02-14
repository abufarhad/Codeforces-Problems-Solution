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

#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)

ll mod=10000007;
ll  bigpow(ll x, ll e)
{
    ll res;
    if (e == 0) res = 1;
    else if (e == 1) res = x;
    else
    {
        res = bigpow(x, e / 2);
        res = res * res;
        if (e % 2) res = res * x;
    }
    return res;
}


int main()
{
    ll m,n,t,b,c,d,i,j,x,y,z,l,p,r;

    ll cnt=0,ans=0;
    scl(m);
    scl(n);
    ll  a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    x=n-1;
    fr(i,n)
    {
        ans+=a[i]*bigpow( m, x);
       // cout<<a[i]<<" "<<pow( m, x)<<endl;
        if(x==0)x=0; else x--;
    }
    //pfl(ans);
    if(ans&1)
        cout<<"odd"<<endl;
    else
        cout<<"even"<<endl;

    return 0;
}




