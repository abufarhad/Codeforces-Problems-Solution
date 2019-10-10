//! Bismillahi-Rahamanirahim.
/** ========================================**
 ** @Author: Md. Abu Farhad ( RUET, CSE'15)
 ** @Category:
/** ========================================**/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define endl 	            "\n"
#define pb                  push_back
#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                 1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             printf("Case %lld: ",i)
#define mx                  100000000

bool prime[mx];
ll p[mx];
void sieve()
{
    ll i,j;
    prime[0]=prime[1]=1;

    for(i=4;i<=mx;i+=2)prime[i]=1;
    for(i=3;i<=sqrt(mx); i+=2)
    {
        if(prime[i]==0)
        {
            for(j=i*i ; j<=mx; j+=2*j)prime[j]=1;
        }
    }

    p[0]=2;
    ll k=1;
    for(i=3;i<=mx;i++)
    {
        if(prime[i]==0)p[k]=i, k++;
    }
}

int main()
{
    sieve();
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
        fr(i, 20)cout<<p[i]<<" "; pn;
      ll cnt=0,ans=0;
      scl(n);
      ll  a[n];
      fr(i,n)cin>>a[i];
      pfl(ans);

return 0;
}

///Before submit=>
///    *check for integer overflow,array bounds
///    *check for n=1

