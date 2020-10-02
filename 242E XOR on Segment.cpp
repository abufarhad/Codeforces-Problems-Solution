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
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)

#define l(s)                s.size()
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007

#define N 100006

ll a[N];



int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    scl(n);

    fr1(i,n) scl(a[i]);

    scl(q);
    while(q--)
    {
        ll typ;
        scl(typ);
        if(typ==1)
        {
            scl(l), scl(r);
            sum=0;
            for(i=l; i<=r; i++)
                sum+=a[i];
            pfl(sum);
        }
        else
        {
            scl(l), scl(r), scl(x);
            for(i=l; i<=r; i++) a[i]^=x;
        }
    }

    return 0;
}


