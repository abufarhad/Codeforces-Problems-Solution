#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define fr(i,n)           for (ll i=0;i<n;i++)
#define fr1(i,n)         for(ll i=1;i<=n;i++)
#define   mod                10000007

ll  bigmul(ll a,ll b)
{
    if(b==0) return 0;
    if(b%2==0)
    {
        ll c=bigmul(a,b/2);
        c= (c+c)%mod;
        return c;
    }
    else
        return (a+bigmul(a,b-1) ) %mod;

}

ll bigmod(ll a,ll b)
{
    if(b==0) return 1;
    if(b%2==0)
    {
        ll c=bigmod(a,b/2);
        c= bigmul(c,c);
        return c;
    }
    else
        return bigmul(a,bigmod(a,b-1) ) ;

}

int main()
{
    ll n,i,k,a,b;
    cin>>a>>b;
    cout<<bigmod(a,b)-bigmod(b,a)<<endl;
}
