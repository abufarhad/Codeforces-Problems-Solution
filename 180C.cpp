
#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
#define ll                  long long
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define l(s)                s.size()

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0, ans=0,sum=0 ;

    cin>>s;
    n=l(s);
    fr(i, n)
    {
        if(s[i]>='a'  and s[i]<='z' )cnt++;
        else if(cnt> 0 )cnt--, ans++;
    }
    cout<<ans<<endl;

    ///FSFmnNEejhfhgfhgflYY

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



