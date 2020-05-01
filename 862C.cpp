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

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;
    cin>>n>>x;

    vector<ll> v , v1;

    if(n==1) pys ,cout<<x<<endl;
    else if(n==2 and x==0)pno;
    else if(n==2 )pys , cout<<0<<" "<<x<<endl;
    else
    {
        pys;
        ans=0;
        fr1(i, n-3)cout<<i<<" " , ans^=i;

        ll pw=1<<17  , pw1=1<<18;
        if(ans==x)cout<<pw<<" "<<pw1<<" "<< (pw^pw1) <<endl;
        else cout<<pw<<" "<<(pw^(x^ans))<<" "<<0<<endl;
    }



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



