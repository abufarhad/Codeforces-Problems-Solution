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
int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;
        ll a[n];

        fr(i,n)scl(a[i]) ;

        i=0;
        x=a[i], y=a[i+1] ;

        fr(i, n)
        {
            if(x+y <=  a[i]  )
            {
                cnt=1 ;
                cout<<1<<" "<<2<< " "<<i+1 <<endl;
                break;
            }
        }

        if(!cnt)
            cout<<-1<<endl;
    }
    return 0;
}
