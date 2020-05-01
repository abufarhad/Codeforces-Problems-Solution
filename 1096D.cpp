
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


int main()
{

    ll t;

    ll m,n,a, b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>s;
    ll cost[n];
    a=0, b=0, c=0, d=0;


    fr(i, n)
    {
        cin>>x;
        if(s[i]=='h' ) a+=x;
        if(s[i]=='a' ) b=min(a, b+x );
        if(s[i]=='r' ) c=min( b, c+x);
        if(s[i]=='d' ) d=min(c, d+x);
    }
    ans=d;
    cout<<ans<<endl;


return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




