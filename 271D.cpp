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
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define l(s)                s.size()
#define N 100006

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>s>>s1>>k;

    set<ll>st;

    n=l(s);
    fr(i, n)
    {
        x=0, cnt=0;
        for(j=i; j<n; j++)
        {
            if(s1[s[j]-'a']=='0' )
                cnt++;
            if(cnt>k)
                break;

            x*=117ll, x+=s[j];
            st.insert(x);
        }
    }

    cout<<st.size()<<endl;

    return 0;
}



