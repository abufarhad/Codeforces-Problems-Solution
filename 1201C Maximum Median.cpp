#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
ll n, a[200005], k;
bool is_mid(ll mid)
{
    ll init=n/2, sum=0;
    for(ll i=init; i<n; i++)
    {
        if (mid-a[i] >0 ) sum+= (mid-a[i]);
        if(sum>k)return 0;
    }
    if(sum<=k)return 1;
    else return 0;
}
int main()
{
        ll m,i,j;
        cin>>n>>k;
        fr(i,n )cin>>a[i];
        asort(a);
        ll l=1, r=1e15, mid;

        while(l!=r)
        {
            mid=(l+r+1)/2;
            if(is_mid(mid) )l=mid;
            else r=mid-1;
        }
        pfl(l);
}
