#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
ll vis[1<<18];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>x;

    n=1<<n;
    vis[x]=1;

    vector<ll>v;

    v.pb(0);
    fr1(i, n-1)
    {
        // "no pair of numbers has bitwise-xor sum equal to 0" simply means "we can't use the same number twice"
        if(!vis[i])
        {
            v.pb(i);
            vis[i]=vis[i^x]=1;
        }
    }

    ans=v.size()-1;
    cout<<ans<<endl;

   fr1(i, ans)
   {
       //cout<<i<<" ";
       cout<<(v[i]^v[i-1])<<" ";
   }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




