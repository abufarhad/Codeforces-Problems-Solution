
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)          scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define allrev(x)           (x).rbegin(),(x).rend()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define N 200006


int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,y,z,l,r, p, q;

        ll cnt=0,cn=0,sum=0 ;
        double x, ansP=0 , ansN=0;
        cin>>n;
        ll ans[n] , vis[n];

        memset(vis , 0, sizeof vis);

        vector<ll>v;

        fr(i,n)
        {
            cin>>x;
            ans[i]=ceil(x );

            if(x-(ll)x ==0 ) vis[i]=1;
            sum+=ans[i];
        }

        fr(i , n)
        {
            if(sum==0)break;
            if(vis[i]==0)ans[i]-- , sum--;
        }

        fr(i , n)cout<<ans[i]<<endl;
    }

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



