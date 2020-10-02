//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

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
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define pn                  printf("\n")

#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define el                  cout<<endl
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pai                 acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))

int main()
{
    ll t;
    scl(t);
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)cin>>a[i];
        dsort(a);
        ll vis[n];
        mem(vis , 0);

        vis[n-1]=1;

        vector<ll>v , v1;
        v.pb( a[0] );

        asort(a);

        ll mx=0;
        fr(i , n)
        {
            k=v.size()-1;
            p=-1  ;
            ll gcd=0;

            fr(j , v.size())mx=__gcd(mx , v[j]);

            fr(j , n-1)
            {
                if(! vis[ j  ])
                {
                    if(gcd <  __gcd(mx , a[j] ))
                    {
                        gcd=__gcd(mx  , a[j] );

                        if(p!=-1) vis[p]=0;

                        vis[j]=1;
                        p=j;
                    }
                }
            }
            if(p!=-1) v.pb(a[p] );
        }


        fr(i , v.size())cout<<v[i]<<" ";pn;
    }

return 0;
}

