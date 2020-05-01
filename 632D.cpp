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

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")

#define N 1000006
ll fac[N],dp[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    ll cnt=0,ans=0,sum=0 ;
    cin>>n>>m;

    ll a[n];

    fr1(i,n){ cin>>a[i]; if(a[i]<=m )fac[a[i] ]++;}


    //finding the number of factors have each  from 1 to m
    fr1(i, m)
    {
        for(j=i; j<=m; j+=i)
        {
            dp[j]+=fac[i];
        }
    }


    ll lcm=max_element(dp+1, dp+m+1 )-dp;       //return the index of max elements

    cout<<lcm<<" "<<dp[lcm]<<endl;

    fr1(i, n)
    {
        if(lcm%a[i] ==0 )cout<<i<<" ";
    }



return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1



