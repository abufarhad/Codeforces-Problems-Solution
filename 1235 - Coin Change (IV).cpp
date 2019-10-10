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
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define l(s)                      s.size()
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
#define N 100006
vector<ll>v,v1;
ll n, a[30];
void gen1(ll id, ll val)
{
    v.pb(val);
    if(id==n/2)return ;
    gen1(id+1, val);
    gen1(id+1, val+a[id]);
    gen1(id+1, val+2*a[id]);
}

void gen2(ll id, ll val)
{
    v1.pb(val);
    if(id==n)return ;
    gen2(id+1, val);
    gen2(id+1, val+a[id]);
    gen2(id+1, val+2*a[id]);
}

int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
     scl(t);
     tcas(x,t)
     {
      ll cnt=0,ans=0;
      scl(n);scl(k);
      fr(i,n)cin>>a[n];
      gen1(0,0);
      gen2(n/2,0);
      pcas(x);
      vasort(v);
      fr(i, v1.size())
      {
          if(binary_search(v.begin(), v.end(), k-v1[i]) )
          {printf("Yes\n"); cnt=1; break;}
      }
      if(cnt==0) printf("No\n");
      v.clear(), v1.clear();
      }
return 0;
}

/// you should actually read the stuff at the bottom
/* stuff you should look for
    *print right output
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do smth instead of nothing and stay organized
*/


