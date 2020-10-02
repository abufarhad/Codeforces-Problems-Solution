
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
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,cnn=0, ans=0,sum=1 , mn=INT_MAX , mx=0 ;
        cin>>n;
        ll a[n];

        fr1(i, n)cin>>a[i];

        fr1(i, n) if(i==a[i])cnt++;


        if(cnt==n)cout<<0<<endl;
        else
        {
            fr1(i, n)if(a[i]!=i){x=i;break;}
            for(i=n; i>=1;i--)if(a[i]!=i){y=i;break;}

            for(i=x; i<=y;i++)if(a[i]==i)ans=1;

            ans++;
            pfl(ans);

        }
    }


return 0;
}

