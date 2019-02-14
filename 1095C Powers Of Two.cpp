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



int main()
{
    ll m,n,i,j,k,l,tmp,ans=0,pow2[35];
    while(cin>>n>>k)
    {
        ll v[k+1];
        fill(v,v+k,1);
        ll sum=k;
        for(i=k-1; i>=0; i--)
        {
            while(sum+v[i]<=n)
            {
                sum+=v[i];
                v[i]*=2;
            }
        }
        if(sum!=n)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            fr(i,k)cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
