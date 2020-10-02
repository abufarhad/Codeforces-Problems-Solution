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
#define N 100005

ll cntt[N];

void calc(ll n )
{
    vector<ll>v;
    while(n)
    {
        v.pb(n%2);
        n/=2;
    }

    cntt[v.size()]++;

    //vv.pb({v.size()  , v[v.size()-1 ]  });
}

int main()
{
    ll t;
    scl(t);
    //t=1;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n;

        ll a[n];

        fr(i,n)scl(a[i])  , calc(a[i] );

        fr(i, N)
        {
            ans+=(cntt[i] * (cntt[i]-1)) /2;
            cntt[i]=0;
        }


        cout<<ans;pn;
    }

return 0;
}
