#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back


#define N 90005
vector<ll>v;
ll calc(ll n)
{
    ll m=n-1;
    ll jog=( m*(m+1))/2;
    ll tmp=(n*(n+1) )+jog;

    return tmp;
}

int main()
{
    /*
    fr1(i, N)
    {
        ll n=i-1;
        ll jog=( n*(n+1))/2;
        n=i;
        ll tmp=(n*(n+1) )+jog;
        v.pb(tmp);
    }
     //fr(i, 20)cout<<v[i]<<" ";
*/
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        scl(n);

        while(n>=2)
        {
            l=1, r=1e5;
            ll ret=-1;

            while(l<=r)
            {
                ll mid=(l+r)/2;
                ll need=calc(mid);

                if( need> n )r=mid-1;
                else l=mid+1, ret=need;
            }

            pfl(ret);
            if(ret==-1)break;

            n-=ret;
            ans++;
        }

        pfl(ans);
    }

    return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



