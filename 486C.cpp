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

#define N 200006

ll vis[N];
int main()
{
    ll t;
    t=1;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,ans1=0 ;
        cin>>n>>p>>s;

        ll start , end , up=-1 , lw=-1;

        if(p<=n/2)start=1, end=n/2;
        else  start=n/2+1, end=n;

        for(i=start  ; i<=end ; i++)
        {
            if(s[i-1]  != s[n-i] )
            {
                if(lw==-1)lw=i;
                up=i;
                ans+= min(  abs( s[i-1] -  s[n-i] )  , 26-abs( s[i-1] -  s[n-i] )    );
            }
        }

        if(up!=-1)ans+= min( abs(p-lw) , abs(p-up))   +(up-lw);

        pfl(ans);
    }
return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1
