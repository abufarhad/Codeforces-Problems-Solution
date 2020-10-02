
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
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define N 100006


int main()
{
    ll m,n,b,c,d,i,j,k,x=1,y=1,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,cn=1,cnt1=0,cn1=0,ans=1,sum=0 ;
    cin>>s;
    n=l(s);
    ll dp[n+5];

    memset(dp, 0, sizeof(dp));
    dp[0]=dp[1]=1;

    fr(i, n)if(s[i]=='w' or s[i]=='m')cnt++;
    for(i=2; i<=n; i++)
    {
        dp[i]=dp[i-1];
        if(s[i-1]==s[i-2]  and (s[i-1]=='u' or s[i-1]=='n') )   dp[i]=(dp[i]+dp[i-2])%md;
    }

    if(cnt)dp[n]=0;
    cout<<dp[n];pn;

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1




