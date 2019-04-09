#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll                  long long
#define pfl(x)              printf("%lld\n",x)


ll findarr(ll *a, ll n)
{
    if( n==1 )return 1;
    else if(is_sorted(a, a+n ) ) return n;
    return  max( findarr(a,n/2  ), findarr(a+n/2, n/2  ));
}

/*
ll a[20];
ll slv(ll l, ll r)
{
    ll cn=0;
    if(l==r) return 1;
    for(ll i=l;i<r;i++)  if(a[i]<=a[i+1]) cn++;

    ll md=(l+r)/2;
    if(cn==r-1 ) return cn+1;
    else return max( slv(l,md), slv(md +1, r) );
}
*/
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    ll a[20];
    ll cnt=1,ans=0;
    cin>>n;
    //for(i=1; i<=n; i++)  cin>>a[i];
    //ans=slv(1,n);

    for(i=0; i<n; i++)  cin>>a[i];
    ans=findarr(a, n);

    pfl(ans);

    return 0;
}





