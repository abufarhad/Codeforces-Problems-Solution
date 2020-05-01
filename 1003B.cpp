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
    ll m,n,a,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0;

    cin>>a>>b>>x;
    n=a+b;
    if(x==1){ fr(i, a)s+='0' ;fr(i, b)s+='1' ; cout<<s<<endl;}
    else
    {
        ll ok=0;
        if(a>=b)ok=1;
        while(x>0)
        {
            if(ok)
            {
            if(a>0) s+='0', a-- , x-- , cnt=1;else break;
            if( !x)break;
            if(b>0) s+='1', b-- , x-- , cnt=-1;else break;
            if( !x)break;
            }
            else
            {
            if(b>0) s+='1', b-- , x-- , cnt=-1;else break;
            if( !x)break;
            if(a>0) s+='0', a-- , x-- , cnt=1;else break;
            if( !x)break;
            }
        }
        if(cnt==-1)
        {
            fr(i, b)s+='1';
            fr(i, a)s+='0';
            cout<<s<<endl;
        }
        else
        {
        fr(i, a)s+='0';
        fr(i, b)s+='1';
        cout<<s<<endl;
        }
    }

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



