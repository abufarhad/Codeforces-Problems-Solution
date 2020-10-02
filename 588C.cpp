
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
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define N 1200005
ll cnt[N];

int main()
{
    ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cn=0,ans=0,sum=0 ;
    scl(n);

    fr(i,n)
    {
        scl(x);
        cnt[x ]++;
    }

    /*
     All of we need number of set bit over all sum (2^w1 + 2^w2 + .....)

     But w<=10^6 so , we cannot go straightforward way
     Idea is :
     In binary, if we want to carry, we must add the same bit to carry. Then the given number is also a power of 2

     we can proof it easily ,
     suppose ,
     a = bit[k] b = bit[k + 1]

     Then,

      a * 2^k + b * 2^(k + 1)

      => ((a/2)*2 + a0) * 2^k + b * 2^(K + 1)

      => a0 * 2^k + (a/2)*2*2^k + b * 2^(k + 1)

      => a0 * 2^k + (a/2)*2^(k + 1) + b * 2^(k + 1)

      => a0 * 2^k + ((a/2) + b) * 2^(k + 1)

      So,

      bit[k] = a0 = (a & 1)
      bit[k + 1] = b + (a / 2)

      Find , if (a&1) then ans++ over [0 : givenRange]
    */

    fr1(i, N)
    {
        cnt[i] += (cnt[i-1 ]/2);
        cnt[i-1]%=2;
    }
    fr(i, N)if(cnt[i])ans++;

    pfl(ans);

return 0;
}

/// **************************Before submit****************************

///    ****Please check all base case output  and printing " YES or NO " ***
///    *check for integer overflow,array bounds
///    *check for n=1




