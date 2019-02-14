//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define pb                 push_back
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define scl(x)           scanf("%lld",&x)
#define pfl(x)           printf("%lld\n",x)
#define pn                printf("\n")
#define debug           printf("I am here\n")
#define mp               make_pair
#define ppb               pop_back

ll find_munber(ll n)
{
    n--;
    ll i=1;
    while(n>=0)
    {
        n-=i;
        i++;
    }
    return (n+i);
}

int main()
{
    ll m,n,i,j,k,f;
    vector<ll>v;
    while(cin>>n>>k)
    {
        fr(i,n){cin>>m; v.pb(m);}
        f=find_munber(k);
        cout<<v[f-1]<<endl;
        v.clear();
    }

}
