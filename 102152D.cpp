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


int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s[5], ans;

    fr(i, 3)cin>>s[i];
    ll one[10];
    ll ttal=0, extra=0, nai=0;

    fr(j, 10)
    {
        ll cnt=0;
        fr(i, 3)if(s[i][j] =='1'  )cnt++, ttal++;
        one[j]=cnt;
    }

    fr(i, 10)ans+='1';


    if(ttal>=10)
    {
        ll baki=abs(10-ttal);
        ll tmp=baki/2;

        if(baki%2)ans[9]='0';
    }
    else
    {
        ll baki=10-ttal;
        i=9;
        while(baki>0)
        {
            ans[i]='0'; baki--;
            i--;
        }
    }

    cout<<ans<<endl;
    }

return 0;
}

/*
3
1111110000
1001001110
0100001001
*/

///***************Before submit*****************

///    ****Please check all base case output***
///    *check for integer overflow,array bounds
///    *check for n=1



