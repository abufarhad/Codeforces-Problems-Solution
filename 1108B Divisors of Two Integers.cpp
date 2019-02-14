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
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll cnt=0,ans=0;
    scl(n);
    vector<ll>v,v1;
    for(i=0; i<n; i++)
    {
        cin>>x;
        v1.pb(x);
    }
    sort(v1.rbegin(), v1.rend());

    for(i=1; i<=(v1[0]); i++)
    {
        if(v1[0]%i==0)
        {
            v.pb(v1[0]/i);
        }
    }
    sort(v.rbegin(),v.rend());

    for(i=1; i<=v1.size(); i++)
    {
        if(v[i]!=v1[i])
        {
            ans=v1[i];
            break;
        }
    }

    if(n/2==v.size() && v[0]==v1[1])  cout<<v[0]<<" "<<v[0]<<endl;
    else cout<<v1[0]<<" "<<ans<<endl;

    return 0;
}
