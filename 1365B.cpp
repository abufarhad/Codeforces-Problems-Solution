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

#define l(s)                s.size()
#define N 200006

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;
        ll a[n] , b[n] , c[n];
        fr(i,n)cin>>a[i], c[i]=a[i];
        fr(i,n)
        {
            cin>>b[i];
            if(b[i])cnt++;
        }

        sort(c, c+n);

       // fr(i, n)cout<<c[i]<<" "; cout<<endl;

        fr(i, n)  if(a[i]==c[i])cn++;

        if(cn==n)pys;
        else if(cnt>0 and cnt!=n)pys;
        else pno;
    }

return 0;
}


