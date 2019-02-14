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
#define fr1(i,n)            for(ll i=1;i<=n;i++)

vector<ll>v[5005];
ll cnt[5005];
int main()
{
    ll m=1,n,t,b,c,d,i,j,k,x,y,f=1,r;

    cin>>n>>k;

    ll a[n];
    for(i=0; i<n; i++)
    {
        cin>>x;
        v[x].pb(i);
        cnt[x ]++;
        if(cnt[ x ] >k) f=0;
    }

    if(f==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

        ll inc=1;
        fr1(i,5000)
        {
            for(j=0; j<v[i].size(); j++)
            {
                x=v[i][j];
                a[x]=inc; inc++;
                if(inc>k) inc=1;
            }
        }
        cout<<"YES"<<endl;
        fr(i,n)cout<<a[i]<<" ";

    return 0;
}





