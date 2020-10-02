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


int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        ll a[5];
        set<ll>st;
        vector<ll>v;
        fr(i, 3)cin>>a[i], st.insert(a[i]);
        //x=a[0] , y=a[1] , z=a[2];

        for(auto i:st)
            v.pb(i);

        y=v[0], x=v[v.size()-1 ];
        z=1;


        if(       max(x, y )==a[0]  and max( x, z )==a[1]  and max(y, z )==a[2]
                  or   max(z, y )==a[0]  and max(z,x )==a[1]  and max(x, y )==a[2]
                  or   max(z,x )==a[0]  and max(z, y )==a[1]  and max(x, y )==a[2]
                  or   max(x, z )==a[0]  and max(x, y )==a[1]  and max(z, y )==a[2]
                  or   max(x, y )==a[0]  and max(z, y )==a[1]  and max(x, z )==a[2]
                  or   max(z, y )==a[0]  and max(x, y )==a[1]  and max(x, z )==a[2]
          )
        {
            pys;
            cout<<x<<" "<<y<<" "<<z<<endl;
        }
        else
            pno;
    }

    return 0;
}


