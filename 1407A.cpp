
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
#define N 200005
#define pfl(x)              printf("%lld\n",x)
#define pn                  printf("\n")
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 , one =0 , zro=0;
        cin>>n;

        ll a[n];

        fr(i,n)
        {
            cin>>a[i];
            if(a[i] )one++;
            else zro++;
        }

        //cout<<one<<" "<<zro<<endl;

        if(zro>=n/2 )
        {
            pfl(zro);
            fr(i , zro)cout<<0<<" ";pn;
        }
        else
        {
            if(one%2)one--;
            pfl(one);
            fr(i , one)cout<<1<<" ";pn;
        }
    }
return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1



