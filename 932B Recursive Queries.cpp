#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define pn                  printf("\n")
ll calcu(ll n)
{
    ll ans=1;
    if(n<10)return n;
    while(n)
    {
        ll val=n%10;
        if(val)ans*=val;
        n/=10;
    }
    return ans;

}

ll calc(ll n)
{
    if(n<10)return n;
    return calc( calcu( n) );

}
int main()
{
    ll m,n,i,j,k,l,r;
    cin>>n;

    vector<ll>v[ 10];

    fr1(i, 1000000)
    {
        ll x=calc(i);
        v[x].pb(i);
    }

    fr(i,n)
    {
        cin>>l>>r>>k;
        ll ans= upper_bound(v[k].begin(), v[k].end(), r  )- lower_bound(v[k].begin(), v[k].end(), l );
        cout<<ans<<endl;
    }
}
