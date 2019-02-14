//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define ll                  long long
#define ull                 unsigned long long LL
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define MOD                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define memo(a,b)           memset(a,b,sizeof(a))
#define inf                 1e9

int main()
{
    ll m,n,i,j=1,k,mx=-1,pos;
    vector<ll>v;

    while(cin>>n)
    {
        ll ans=inf;
        fr(i,n)cin>>k,v.pb(k);
        if(n==2) cout<<"0"<<endl;
        else
        {
            sort(v.begin(), v.end());
            ans=min( v[n-2]-v[0] , v[n-1]-v[1]);
            cout<<ans<<endl;
        }
        v.clear();
    }
}
