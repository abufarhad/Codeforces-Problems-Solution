
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

    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,cn=0,ans=0,sum=0 ;
    cin>>n>>k;

    if(n==1 and k==0){cout<<1<<endl;return 0;}
    if((n==1 and k>0) or (n>1 and k==0)or ( n/2 >k) ){cout<<-1<<endl;return 0;}


    ll baki=k-(n-2)/2;

    cout<<baki<<" "<<2*baki<<" ";
    k=2*baki+1;

    fr(i, n-2)
    {
        cout<<k<<" ", k++;
    }


return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




