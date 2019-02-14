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
#define md                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)          sort(a,a+n)

int main()
{
    ll m,n,k,i,j;
    vector<ll>a,b,v;
    cin>>n>>m;

    fr(i,n)cin>>k, a.pb(k);
    fr(i,m)cin>>k, b.pb(k);

    sort(a.begin(), a.end());
    fr(i,m) cout<<upper_bound(a.begin(), a.end(), b[i])   - a.begin() <<" ";

}
