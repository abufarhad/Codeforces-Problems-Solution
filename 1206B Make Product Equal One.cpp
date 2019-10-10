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
#define l(s)                      s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)         sort(v.begin(), v.end());
#define vdsort(v)         sort(v.begin(), v.end(),greater<int>());
#define pn                  printf("\n")
#define md                  10000007
#define inf                  1<<28
#define debug               printf("I am here\n")
#define ps                  printf(" ")
#define mem(a,i)          memset(a, i, sizeof(a))
#define tcas(i,t)             for(ll i=1;i<=t;i++)
#define pcas(i)                printf("Case %lld: ",i)
//ll x[10]= {0,-1,-1,1,1,-2,-2,2,2};
//ll y[10]= {0,-2,2,-2,2,-1,1,-1,1};

//   ios_base::sync_with_stdio(0);
//    cin.tie(0);

// sscanf(c, "%s %s", s,s1); // take string buffer  and then distribute all value , here take 2 value and distribute
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
//ll bigmod(ll b, ll p, ll md){if(p==0) return 1;if(p%2==1){ return ((b%md)*bigmod(b,p-1,md))%md;} else {ll y=bigmod(b,p/2,md);return (y*y)%md;}}
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}

#define N 100006

int main()
{

    ll m,n,t,b,c,d,i,j,k,x=0,y=0,l,q,r;


    ll cnt=0,one=0,cn=0,ans=0;
    scl(n);
    ll  a[n];
    vector<ll>pos, neg, z;
    fr(i,n)
    {
        cin>>a[i];
        if(a[i]==1) continue;
        else if(a[i]==0)z.pb(a[i]);
        else if(a[i]>1) pos.pb(a[i]);
        else neg.pb(a[i]);
    }
    ll zro;

    zro=z.size();
    fr(i, pos.size()) cnt+=abs(1-pos[i]);
    fr(i, neg.size())  cn+=abs(neg[i]+1);


    if(neg.size()%2==1  and zro>=1) cn+=1, zro--;
    else if(neg.size()%2==1  and zro==0 )cn+=2;


    ans=zro+cnt+cn;

    pfl(ans);


    return 0;
}

/// you should actually read the stuff at the bottom
/* stuff you should look for
    *print right output
    * int overflow, array bounds
    * special cases (n=1?), set tle
    * do smth instead of nothing and stay organized
*/


